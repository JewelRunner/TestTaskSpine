The goal I set for myself is to develop the project within 8 hours. Total time spent:

1. GAS Installation and configuration. ~3 hours.
2. Everything else. ~5 hours.

The main goal was to utilize the Data Drived Design pattern as much as possible.
Thus you can control a lot of things without touching any code by using the DA_SpineConfig asset.

I used a DataTable for CharacterAttributes because it's the most powerful and flexible way: you can create data tables within the Unreal, other programs or even upload from a remote server.
DA_SpineConfig serves as the authoritative source of the data, allowing to have multiple data tables in the projects and switch those easily.

We can also set Attack parameters in the DA_SpineConfig to change values without going in the code.

ComboSystem allows to choose different montages in different order. The array ComboMontages in the DA_SpineConfig serves for that.

P. S. I wanted to finish the project within an 8-hour time frame so some parts of the code clearly need refactoring and optimizing.
We can discuss how this solution could be improved on the technical interview.

Thank you for an interesting task, looking forward to further cooperation.
