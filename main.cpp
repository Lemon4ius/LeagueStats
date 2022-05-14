#include <vector>
#include <string>
#include <fstream>
#include <iostream>

#include "StartForm.h"

#include "Hero.h"
#include "json.hpp"

using namespace std;
using namespace LegueStats;
using namespace System;
using namespace System::Windows::Forms;

using json = nlohmann::json;

vector<Hero> parseHeroes(string path = "assets/heroes.json") {
	vector<Hero> heroVector;

	string jsonText;
	ifstream jsonfile(path);
	if (!jsonfile.is_open()) return vector<Hero>();
	
	string line;
	while (getline(jsonfile, line)) jsonText += line;

	jsonfile.close();

	json j = json::parse(jsonText);
	for (int i = 0; i < j.size(); i++) {
		string title = j[i]["title"].get<string>();
		string description = j[i]["description"].get<string>();
		string picturesDir = j[i]["picturesDir"].get<string>();

		vector<Skill> skills;
		for each (auto skillRaw in j[i]["skills"]){
			string title = skillRaw["title"].get<string>();
			string description = skillRaw["description"].get<string>();
			string pictureName = skillRaw["pictureName"].get<string>();
			string gifName = skillRaw["gifName"].get<string>();

			Skill skill = { title, description, pictureName, gifName };
			skills.push_back(skill);
		}

		Hero hero = { title, description, picturesDir, skills };
		heroVector.push_back(hero);
	}

	return heroVector;
}

int main() {
	heroes = parseHeroes();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Selector form;
	Application::Run(% form);

}