# Events and Asynchronous Behavior

## Purpose

This document describes the **asynchronous events** used in the CESC 450
real-time embedded system project.

Events represent conditions that occur **outside normal periodic task execution**
and require timely system response.

This document focuses on **what events mean and how the system is expected to respond**,
not on hardware-specific implementation details or ISR code.

---

## Student Guidance

This file is part of the course project documentation and is used to explain
the **intent and role of events** in your system.

You are expected to:
- Describe what asynchronous events exist in your system
- Explain what each event represents conceptually
- Describe the expected system or task-level response to each event
- Keep event descriptions consistent with your implemented behavior

You are NOT expected to:
- Include ISR or signal-handling code
- Reference hardware registers, pins, or device-specific details
- Duplicate step-by-step lab instructions

This document should remain **conceptual, concise, and system-focused**.

---

## What Is an Event in This Project?

An event is an asynchronous condition that:

- Occurs unpredictably
- Requires prompt attention
- Must be handled without destabilizing the system

In real-time systems, events are often associated with:
- Fault conditions
- Threshold violations
- External or simulated inputs
- Time-critical alerts

Events are typically detected in interrupt or signal context and forwarded
to tasks for processing using **ISR-safe mechanisms**.

---

## Defined Events (Conceptual)

The following events illustrate the types of asynchronous behavior supported
by the system. Teams may extend this list as needed, provided new events are
documented here.

### EVENT_STATUS_ALERT

**Description:**  
Indicates that a monitored condition has exceeded a defined threshold
or entered an abnormal state.

**Expected System Response:**  
- Notify a designated task
- Record or log the condition
- Continue system operation

---

### EVENT_WATCHDOG_TIMEOUT

**Description:**  
Indicates that a task or subsystem failed to report within an expected
time window.

**Expected System Response:**  
- Trigger a warning or alert
- Record evidence of the timeout
- Optionally adjust system state or behavior

---

### EVENT_EXTERNAL_SIGNAL

**Description:**  
Represents an external or simulated input that requires immediate
attention by the system.

**Expected System Response:**  
- Signal a task using an ISR-safe mechanism
- Defer all non-trivial processing to task context

---

## Event Handling Guidelines

When implementing event-driven behavior:

- Interrupt Service Routines (ISRs) must remain **short and bounded**
- ISRs must **not block** or perform heavy processing
- Events should be forwarded to tasks using RTOS-safe signaling mechanisms
- Tasks are responsible for all meaningful event processing

These rules help preserve system responsiveness and reliability.

---

## Evidence Expectations

When demonstrating event-driven behavior, capture evidence showing:

- The event being triggered
- ISR-safe signaling or notification
- Task-side handling of the event
- Observable system response

Refer to **EVIDENCE.md** for detailed submission guidance.

---

## Updating This Document

Update this file when you:

- Add a new event type
- Change the meaning of an existing event
- Modify how the system responds to an event

Keeping event documentation current improves system clarity,
debugging, and grading outcomes.

---

## Final Note

Well-designed event handling is a hallmark of reliable real-time systems.

Use this document to explain not just **what events exist**, but **why they
are defined and how they support predictable system behavior**.
