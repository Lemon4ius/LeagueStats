#include "StartForm.h"

#include "Hero.h"
#include "Item.h"




using namespace std;
using namespace LegueStats;
using namespace System;
using namespace System::Windows::Forms;

using namespace Newtonsoft::Json;

BOOL WINAPI FreeConsole(VOID);
System::Collections::Generic::List<Hero^>^ parseHeroes(System::String^ path = "assets/heroes.json") {
	auto json = System::IO::File::ReadAllText(path);
	return JsonConvert::DeserializeObject<System::Collections::Generic::List<Hero^>^>(json);
}

System::Collections::Generic::List<Item^>^ parseItems(System::String^ path = "assets/items.json") {
	auto json = System::IO::File::ReadAllText(path);
	return JsonConvert::DeserializeObject<System::Collections::Generic::List<Item^>^>(json);
}

[STAThreadAttribute]
int main() {
	
	System::Collections::Generic::List<Hero^>^ heroes = parseHeroes();
	System::Collections::Generic::List<Item^>^ items = parseItems();
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StartForm^ form = gcnew StartForm(heroes, items);
	Application::Run(form);
	
}