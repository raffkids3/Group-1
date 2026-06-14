# CESC 450 – Real-Time Embedded System Project

This repository contains the cumulative course project for **CESC 450: Real-Time Embedded Systems**.  
You will build a single real-time embedded software system incrementally across the modules of the course.

This is **not** a collection of isolated labs.  
Each module extends the same project codebase by adding new real-time capabilities.

---

## What You Are Building

You are developing a **real-time embedded software system** using RTOS services.

The system is intentionally modeled after the structure and constraints of **aviation and avionics software**, where:

- Timing correctness matters
- Concurrency must be controlled
- System reliability is critical
- Behavior must be explainable using evidence

The goal is **not hardware realism**.  
The goal is to correctly implement and analyze **real-time software mechanisms**.

More details about the system’s purpose and scenario are described in:

**PROJECT_BRIEF.md**

---

## How This Project Grows

The project evolves across modules:

- **Module 2:** Environment setup and project baseline  
- **Module 3:** Concurrent tasks and execution control  
- **Module 4:** Timing services and watchdog monitoring  
- **Module 5:** Synchronization and shared resource protection  
- **Module 6:** Inter-task communication using message queues  
- **Module 7:** Event-driven behavior (interrupts/signals)  
- **Module 8:** System integration and stabilization  
- **Module 9:** Final demonstration and presentation  

Each guided lab adds functionality to this same system.

---

## Repository Structure

```
.
├── README.md               # This file
├── PROJECT_BRIEF.md        # What the system represents this term
├── EVIDENCE.md             # What evidence to capture for grading
├── CONTRIBUTING.md         # Team workflow and expectations
│
├── src/                    # All project source code
│   ├── main.c              # Entry point and task creation
│   ├── tasks/              # RTOS tasks (Module 3+)
│   ├── timing/             # Timers and watchdog logic (Module 4)
│   ├── shared/             # Shared data and synchronization (Module 5)
│   ├── ipc/                # Message queues and IPC (Module 6)
│   └── interrupts/         # Event/ISR-related code (Module 7)
│
├── include/                # Project-wide headers
├── docs/                   # Architecture and design notes
├── scenario/               # Scenario description (changeable each term)
├── build/                  # Build notes (no generated files)
└── .github/                # GitHub issue and PR templates
```

---

## Build and Run Instructions

This project uses a **host-based RTOS configuration**, so it can be built and run without physical hardware.

### Build

Follow the instructions provided in your module lab guide for:

- Compiler and toolchain setup  
- Platform-specific build commands  

The project should build without errors before you proceed to later modules.

### Run

Run the built executable according to the lab instructions.

A successful run will produce **observable output**, such as:

- Task activity messages  
- Periodic timing output  
- Status or “heartbeat” indicators  

If you do not see output, **do not proceed**.  
Fix the build or run issue first.

---

## How to Tell If It’s Working

At a minimum, a working system should demonstrate:

- Multiple RTOS tasks running concurrently  
- Observable task scheduling behavior  
- Correct timing behavior (where implemented)  
- Stable execution without crashes or hangs  

Each module adds new expectations.  
Refer to **EVIDENCE.md** for what to capture and submit.

---

## Evidence and Grading

This course emphasizes **evidence-based evaluation**.

You are expected to capture:

- Output logs  
- Timing measurements  
- Screenshots or recordings  
- Brief notes explaining observed behavior  

What to capture each module is documented in:

**EVIDENCE.md**

---

## Team Workflow Expectations

This project uses a **team-based GitHub workflow**.

- Work in branches  
- Use pull requests  
- Keep the `main` branch stable  
- Do not break previously working functionality  

Details are provided in:

**CONTRIBUTING.md**

---

## Final Reminder

Real-time systems are not evaluated by intention.

They are evaluated by:

- Observed behavior  
- Timing correctness  
- Reliability under load  
- Clear justification of design decisions  

Treat this repository as a **real engineering artifact**, not a disposable assignment.
