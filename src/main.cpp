#include <iostream>
#include <windows.h>
#include <thread>

std::string smile() {  
    static const char* smile322[] = { "=]", "XD", "-_0", "0_o", "=/", "<3", ":)" };
    int v = rand() % sizeof(smile322)/sizeof(const char*);
    return smile322[v];
}

void playNote(int freq, int duration_ms) {
    Beep(freq, duration_ms);
    std::this_thread::sleep_for(std::chrono::milliseconds(40));
}

int main() {
    srand(time(NULL));
    int n;
    std::cout << "Count of important things: ";
    std::cin >> n;
    std::cin.ignore();

    for (int i = n; i > 0; i--) {
        std::cout << "Important things remain: " << i;
        std::cin.get();
        std::cout << "Done\n";
        playNote(262, 200); // C4
        playNote(330, 200); // E4
        playNote(392, 250); // G4
        playNote(523, 400); // C5

        std::cout << smile() << "\n";

        playNote(494, 200); // B4
        playNote(392, 200); // G4
        playNote(440, 300); // A4

        playNote(330, 150); // E4
        playNote(349, 150); // F4
        playNote(392, 600); // G4
    }

    std::cout << "All important things are done!" << std::endl;

    playNote(262, 300); // C4
    playNote(262, 300); // C4
    playNote(294, 400); // D4
    playNote(262, 400); // C4
    playNote(349, 400); // F4
    playNote(330, 600); // E4
        
    playNote(262, 300); // C4
    playNote(262, 300); // C4
    playNote(294, 400); // D4
    playNote(262, 400); // C4
    playNote(392, 400); // G4
    playNote(349, 600); // F4
      
    playNote(262, 300); // C4
    playNote(262, 300); // C4
    playNote(523, 400); // C5
    playNote(440, 400); // A4
    playNote(349, 400); // F4
    playNote(330, 400); // E4
    playNote(294, 600); // D4
       
    playNote(466, 300); // Bb4
    playNote(466, 300); // Bb4
    playNote(440, 400); // A4
    playNote(349, 400); // F4
    playNote(392, 400); // G4
    playNote(349, 800); // F4
    return 0;
}
