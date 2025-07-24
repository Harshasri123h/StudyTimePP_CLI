# 📚 StudyTime++ – C++ CLI Study Tracker

A terminal-based study time tracking app built in **C++** using **SQLite**.  
Students can log sessions and view progress. Teachers can set goals and monitor performance.

---

## 🚀 Features
- 🧑‍🎓 Student: Log sessions, track goals, view streaks
- 👩‍🏫 Teacher: View logs, set daily subject goals, generate summaries

---

## 🛠 Tech Stack
- **Language:** C++
- **Database:** SQLite
- **Tools:** g++, Git, Terminal

---

## ⚙️ How to Run

```bash
g++ -std=c++17 src/*.cpp -Iinclude -lsqlite3 -o build/studytime
./build/studytime
