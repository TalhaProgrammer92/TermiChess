```
_________ _______  _______  _______ _________   _______           _______  _______  _______ 
\__   __/(  ____ \(  ____ )(       )\__   __/  (  ____ \|\     /|(  ____ \(  ____ \(  ____ \
   ) (   | (    \/| (    )|| () () |   ) (     | (    \/| )   ( || (    \/| (    \/| (    \/
   | |   | (__    | (____)|| || || |   | |     | |      | (___) || (__    | (_____ | (_____ 
   | |   |  __)   |     __)| |(_)| |   | |     | |      |  ___  ||  __)   (_____  )(_____  )
   | |   | (      | (\ (   | |   | |   | |     | |      | (   ) || (            ) |      ) |
   | |   | (____/\| ) \ \__| )   ( |___) (___  | (____/\| )   ( || (____/\/\____) |/\____) |
   )_(   (_______/|/   \__/|/     \|\_______/  (_______/|/     \|(_______/\_______)\_______)
                                                                                            
```
# ♟️ TermiChess - C++ Terminal Based Chess Game

A feature-rich, object-oriented, console-based Chess game built entirely in **C++**.  
Designed for multiplayer (PvP) gameplay with plans to include **AI opponent**, **match history**, **scoreboard**, **timers**, and more.

---

## 🚀 Features

- ✔️ Fully playable Chess Game (PvP)
- 🧠 Clean object-oriented architecture
- 🏁 Move validation based on chess rules
- 🕰️ Match timer and move tracking
- 📊 Scoreboard and player statistics
- 🧱 Modular class structure for easy extension
- 🎯 CLI-based interface with Unicode symbols
- ⌨️ Input validation and error messages
- 📂 CSV-based file handling for match data

---

## 📦 System Architecture

The project follows a **modular and scalable architecture**.  
Key components include:

- `ChessPiece` → Base class for all pieces
- `Pawn`, `Rook`, `Knight`, etc. → Derived classes with overridden movement logic
- `Board` → Manages the game grid and state
- `Player` → Stores player name, score, stats
- `Game` → Controls game loop, turn system, win/draw detection
- `CSVHandler` → Reads/writes match history
- `Timer` → Tracks match time
- `Menu`, `Message` classes → UI and input flow

> Full class diagram: [View Architecture](https://drive.google.com/file/d/1u-DtBPjFctphMpQHRQgqSOLr0eKgMw0c/view?usp=drive_link)

---

## 🛠️ Getting Started

### 🔧 Prerequisites

- C++17 or higher
- A C++ compiler (g++, clang++, MSVC)
- Git (optional but recommended)
- VS Code or any preferred IDE

### 📁 Project Structure

```
/src 
├── main.cpp 
├── game/ 
├── board/ 
├── pieces/ 
├── ui/ 
├── utils/ 
└── data/
```


---

## 🧪 Build & Run

### 💻 Compile

#### 🔸 Linux / macOS:
```bash
g++ src/*.cpp src/**/*.cpp -o chess -std=c++17
./chess
```

#### 🔸 Windows (MinGW):
```
g++ src\*.cpp src\**\*.cpp -o chess.exe -std=c++17
chess.exe
```

> Tip: Add a Makefile or VS Code tasks.json for one-click builds.

---

## 🎯 Roadmap
- Complete PvP functionality

- Add match timer and scoring system

- Save/load game state

- Add AI opponent (Minimax or other)

- Highlight last move

- Add undo/redo functionality

- Chess notation display (e.g., e4, Nc6)

- Tournament mode

- Console animations & theme options

- Multiplayer over LAN or sockets

- WebAssembly version (optional fun)

---

## 🤝 Team
| Name | Role |
|------|------|
| Talha	🧠 | Lead Developer / Architect |
| Areeb	👨‍💻 | Co-Developer |
| Rayan	🛠️ | Contributor |
| Raza	⚙️ | Functions and Testing |

---

## 📌 Why This Project?
> "Most students build simple games. We wanted to push the limits of what's possible in the console — to design a professional-grade project using only raw C++, clean architecture, and teamwork. This is our playground and our portfolio." — Talha

---

## 📄 License
This project is open-source and available under the [MIT License](https://github.com/TalhaProgrammer92/TermiChess?tab=MIT-1-ov-file).

---

## 🙌 Contributing
Pull requests are welcome! If you'd like to contribute to this project:

1. Fork the repo

2. Create your feature branch (git checkout -b feature/new-feature)

3. Commit your changes

4. Push to the branch

5. Open a pull request

---

## 💡 Inspiration
This project is built to test our limits as students, coders, and future engineers — and to showcase what can be done without relying on external libraries, GUIs, or hand-holding.

---
