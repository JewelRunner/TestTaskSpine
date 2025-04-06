// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "Interaction/CombatInterface.h"
#include "SpineCharacterBase.generated.h"

class USpineAttributeSet;
class USpineAbilitySystemComponent;

UCLASS()
class TESTTASKSPINE_API ASpineCharacterBase : public ACharacter, public IAbilitySystemInterface, public ICombatInterface
{
	GENERATED_BODY()

public:
	ASpineCharacterBase();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly);
	TObjectPtr<USpineAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<USpineAttributeSet> AttributeSet;

	virtual void TakeDamage_Implementation() override;
protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
