// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/SpineCharacterBase.h"

#include "AbilitySystem/SpineAbilitySystemComponent.h"
#include "AbilitySystem/SpineAttributeSet.h"

ASpineCharacterBase::ASpineCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<USpineAbilitySystemComponent>("AbilitySystemComponent");
	AttributeSet = CreateDefaultSubobject<USpineAttributeSet>(TEXT("AttributeSet"));

	AttributeSet->InitHealth(0.f);
	AttributeSet->InitMaxHealth(0.f);
	AttributeSet->InitStamina(0.f);
	AttributeSet->InitMaxStamina(0.f);
}

UAbilitySystemComponent* ASpineCharacterBase::GetAbilitySystemComponent() const
{
	return Cast<UAbilitySystemComponent>(AbilitySystemComponent);
}

void ASpineCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void ASpineCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASpineCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

