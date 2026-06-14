# Project Scenario Overview

## Purpose

This document describes the **conceptual scenario** for the CESC 450 real-time embedded
systems course project.

The scenario provides *context* and *meaning* for the system you are building, without
locking the project to specific hardware, devices, or real-world physics.

The technical requirements of the project are defined by the guided labs.
This document explains **what the system represents** at a high level.

---

## Student Guidance

This file is provided to help you understand the *intent* of the project.

You are expected to:

- Read and understand the scenario
- Use it to inform design decisions and explanations
- Ensure your implementation behavior is consistent with the scenario description

You are NOT expected to:

- Implement real-world physics or hardware simulation
- Match any specific aircraft or avionics platform
- Modify this file unless explicitly instructed

---

## Scenario Description

The system you are building represents a **simplified avionics-style monitoring and
coordination subsystem**.

In real aircraft, many embedded subsystems operate concurrently to:

- Monitor system health
- Coordinate information between components
- Detect abnormal conditions
- Respond to events in a predictable and timely manner

This project models that kind of subsystem at the **software architecture level**.

The system consists of multiple real-time tasks that:

- Execute concurrently
- Communicate using structured messages
- Share limited state safely
- React to asynchronous events
- Enforce timing constraints and monitor system health

---

## What the System Is (Conceptually)

You can think of this system as:

- A supervisory or monitoring component
- A coordination layer between concurrent processing elements
- A real-time subsystem responsible for reliability and responsiveness

The system observes conditions, exchanges information, and produces observable output
that demonstrates correct real-time behavior.

---

## What the System Is NOT

To avoid confusion, this project is **not**:

- A flight simulator
- A physical aircraft model
- A hardware driver development project
- A control-law or dynamics simulation

The focus is entirely on **real-time software design and behavior**.

---

## Relationship to Messages and Events

- **Messages** represent structured information exchanged between tasks
- **Events** represent asynchronous conditions requiring attention

The meaning of specific messages and events is documented separately in:

- `messages.md`
- `events.md`

Together, these documents describe how the system communicates and reacts.

---

## Evidence and Explanation

When demonstrating your system, you should be able to explain:

- What part of the scenario a task represents
- What a message or event means in context
- Why timing and scheduling choices matter for this system

This explanation is as important as the code itself.

---

## Flexibility Across Terms

The scenario described here may evolve from term to term.

This allows the course to remain current while preserving:

- The same project structure
- The same learning outcomes
- The same guided lab sequence

Regardless of scenario details, the expectations for real-time behavior,
reliability, and evidence-based justification remain the same.

---

## Final Note

Use this scenario as a **conceptual anchor**, not a constraint.

Your goal is to build a system that behaves like a real-time embedded subsystem,
and to explain *why* it behaves the way it does using clear evidence and reasoning.