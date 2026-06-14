# System Architecture (CESC 450 Course Project)

## Purpose

This document provides a high-level view of the system architecture for the cumulative
real-time embedded system project in CESC 450.

The goal of this project is to implement and analyze real-time software mechanisms
(tasks, timing, synchronization, IPC, and event-driven behavior) in an integrated system.

This architecture description is intentionally lightweight and will evolve as the system grows.

---

## High-Level System View

At a conceptual level, the project system can be viewed as a small real-time subsystem
with the following major elements:

- **Concurrent tasks** that execute independently under the RTOS scheduler
- **Timing services** that enforce periodic behavior and enable monitoring
- **Synchronization mechanisms** that protect shared state
- **Message-based IPC** that supports structured task coordination
- **Event-driven input** that triggers asynchronous system behavior

---

## Architecture Diagram (Conceptual)

The diagram below shows a typical flow of control and data in the system.
The exact number and names of tasks may vary between implementations.

```
                 +--------------------------+
                 |     Event Source         |
                 | (Interrupt / Signal /    |
                 |  Simulated Event)        |
                 +------------+-------------+
                              |
                              | ISR-safe signal / notification
                              v
+-------------------+     +-------------------+     +-------------------+
|   Task A           |     |   Task B           |     |   Task C           |
|  (Producer /       | --> |  (Processing /     | --> |  (Logging /        |
|   Acquisition)     | MQ  |   Decision)       | MQ  |   Output / Alerts) |
+---------+----------+     +---------+----------+     +---------+----------+
          |                          |                          |
          |                          |                          |
          v                          v                          v
   Shared State (Protected)   Timing / Watchdog Checks    Evidence Output
    (Mutex/Semaphore)         (Timers + Health Logic)     (Console / Logs)
```

Legend:
- **MQ** = Message Queue communication
- **Shared State** = shared data structure protected by synchronization
- **Event Source** = asynchronous trigger handled safely by deferring work to tasks

---

## Module-to-Architecture Mapping

This section summarizes how the architecture grows across the course modules:

### Module 2 – Baseline Setup
- System builds and runs
- Repository structure and workflow established

### Module 3 – Tasks and Concurrency
- Task A, Task B (and possibly Task C) created
- Demonstrates concurrent execution and scheduling behavior

### Module 4 – Timing and Watchdogs
- Periodic behavior added (timers)
- Watchdog-style health monitoring introduced

### Module 5 – Synchronization
- Shared state introduced and protected using mutex/semaphore
- Concurrency hazards managed deliberately

### Module 6 – Inter-Task Communication
- Message queues added for structured communication
- Producer/consumer or pipeline patterns implemented

### Module 7 – Event-Driven Behavior
- Asynchronous events introduced
- ISR-to-task signaling pattern implemented safely

### Module 8 – Integration and Reliability
- System behavior analyzed under stress or load
- Priorities, timing, blocking, and queue behavior refined

### Module 9 – Final Demonstration
- Complete integrated system demonstrated
- Evidence-based justification of design decisions

---

## Notes for Students

- The specific task names and message contents may differ between teams.
- The key requirement is that the integrated system demonstrates correct use of RTOS services.
- Keep the architecture simple, observable, and testable.
- Update this document if your team makes major structural changes (e.g., new tasks, new message flows).

---

## Suggested Update Points

Consider updating this document when you:

- Add or remove major tasks
- Change the primary message flow pattern
- Introduce new shared state or synchronization design
- Change event-driven signaling strategy
