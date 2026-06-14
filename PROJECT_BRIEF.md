# PROJECT_BRIEF – Real-Time Embedded System Project

## Purpose of This Document

This document describes **what the system you are building represents this term**.
It provides the narrative and conceptual context for the course project.

The technical requirements of the project are defined by the guided labs in each module.
This brief exists to help you understand *why* the system behaves the way it does and how
the different components fit together conceptually.

---

## System Overview

The project represents a **simplified real-time embedded subsystem**, similar in structure
and constraints to software used in **aviation and avionics systems**.

The system is not intended to simulate flight physics or real aircraft hardware.
Instead, it models the *software architecture* and *real-time behavior* common in
safety- and timing-critical environments.

Key characteristics of the system include:

- Concurrent execution of multiple tasks
- Strict timing expectations for periodic behavior
- Safe coordination between tasks using synchronization and messaging
- Event-driven responses to asynchronous conditions
- Emphasis on reliability, predictability, and evidence-based analysis

---

## Conceptual Role of the System

You can think of this system as a **monitoring and coordination subsystem** within a larger
avionics architecture.

Examples of responsibilities such a subsystem might have in a real system include:

- Monitoring system status or health indicators
- Coordinating information between concurrent processing components
- Detecting timing faults or abnormal conditions
- Reacting to external events in a bounded and predictable way

For this course, the *exact domain meaning* of the data is intentionally abstract.
Messages, events, and shared data represent **logical system information**, not physical
measurements.

---

## How the System Evolves Across Modules

The system grows incrementally as follows:

- **Module 2:** Establish a working RTOS environment and project baseline
- **Module 3:** Introduce concurrent tasks and execution control
- **Module 4:** Add timing services and watchdog-style monitoring
- **Module 5:** Protect shared data using synchronization mechanisms
- **Module 6:** Coordinate tasks using structured message-based communication
- **Module 7:** React to asynchronous events using interrupt- or signal-driven patterns
- **Module 8:** Analyze integrated system behavior and improve reliability
- **Module 9:** Demonstrate and justify the completed system

At no point should functionality from earlier modules be discarded.
The system should remain stable as new capabilities are added.

---

## Messages and Events (Conceptual)

Within the system:

- **Messages** represent structured information passed between tasks
- **Events** represent asynchronous conditions that require attention

You are free to choose message contents and event meanings that make sense for your
implementation, provided they support the goals of the guided labs and remain consistent
with real-time design principles.

Supporting notes for messages and events may be found in the `scenario/` directory.

---

## Design Philosophy

This project emphasizes **engineering judgment**, not just implementation.

You are expected to:

- Justify design choices using observed behavior
- Use evidence (logs, timing output, tests) to support conclusions
- Consider tradeoffs related to scheduling, blocking, and responsiveness
- Favor predictability and clarity over unnecessary complexity

The final evaluation focuses on *how the system behaves* and *how well you can explain that behavior*.

---

## Flexibility of the Scenario

The conceptual scenario for this project may change from term to term.
This allows the course to remain current while preserving the same technical learning outcomes.

Regardless of the specific scenario, the core expectations remain the same:

- Correct use of RTOS services
- Reliable system behavior under real-time constraints
- Clear, evidence-based explanation of design decisions

---

## Final Note

Treat this project as a **real engineering artifact**.

Well-structured code, clear documentation, and thoughtful analysis matter just as much as
functional correctness.

Use this document as a guide to understand the *intent* of the system as you work through
each module.
