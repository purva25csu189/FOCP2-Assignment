// Student Excuse Generator
// Assignment 4 - Vibe Coding
// Generates random creative excuses for missing homework/assignments

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// Replace all occurrences of {name} placeholder with actual name
string replacePlaceholder(string templ, const string& name) {
    string placeholder = "{name}";
    size_t pos = 0;

    while ((pos = templ.find(placeholder, pos)) != string::npos) {
        templ.replace(pos, placeholder.length(), name);
        pos += name.length();
    }

    return templ;
}

int main() {

    // Seed random number generator with current time
    srand(static_cast<unsigned int>(time(0)));

    // Excuse templates
    vector<string> excuseTemplates = {
        "{name} couldn't complete the assignment because the laptop battery died unexpectedly.",
        "{name} tried finishing the homework, but the internet stopped working for 12 hours.",
        "{name} was about to submit when the file mysteriously disappeared from the desktop.",
        "{name} couldn't finish the assignment because the laptop decided to install updates for six hours.",
        "{name} was ready to submit, but the Wi-Fi router caught a cold and refused to work.",
        "{name}'s little sibling used the keyboard as a drum set and deleted everything.",
        "{name} finished the assignment, but the dog sat on the laptop and somehow uninstalled Word.",
        "{name} tried to open the file but the computer demanded a sacrifice before cooperating.",
        "{name} was about to complete the homework when a power cut visited for three hours.",
        "{name} saved the assignment to the cloud, but the cloud apparently moved to another city.",
        "{name} had finished 99% of the assignment when the screen went black and never came back.",
        "{name} couldn't submit because the college portal was in a bad mood and kept crashing.",
        "{name}'s keyboard stopped typing vowels, making the assignment impossible to complete."
    };

    string name;

    cout << "===== Student Excuse Generator =====\n";
    cout << "Enter your name: ";

    getline(cin, name);

    // Handle empty input
    if (name.empty()) {
        cout << "Please enter your name to generate an excuse!\n";
        return 0;
    }

    // Randomly select an excuse
    int index = rand() % excuseTemplates.size();

    string excuse = replacePlaceholder(excuseTemplates[index], name);

    cout << "\n📋 YOUR EXCUSE FOR TODAY 📋\n";
    cout << excuse << "\n";

    cout << "\n(This excuse is 100% believable. Probably.)\n";

    return 0;
}