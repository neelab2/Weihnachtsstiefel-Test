class CfgPatches
{
	class nickisweihnachtsstiefel
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Shoes"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class Wellies_ColorBase;
	class Wellies_Weihnacht: Wellies_ColorBase
	{
		scope=2;
		itemsCargoSize[]={5,5};
		hiddenSelectionsTextures[]=
		{
			"\nickisweihnachtsstiefel\data\platzhalter.paa", //hier deine textur mit platzhalter ersetzen
			"\nickisweihnachtsstiefel\data\platzhalter.paa", //hier deine textur mit platzhalter ersetzen
			"\nickisweihnachtsstiefel\data\platzhalter.paa" //hier deine textur mit platzhalter ersetzen
		};
	};
};
