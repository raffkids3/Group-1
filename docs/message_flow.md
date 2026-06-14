# Message Flow and Inter-Task Communication

## Purpose

This document describes the **message-based communication patterns** used in the CESC 450
real-time embedded system project.

It is primarily used starting in **Module 6 (Inter-Task Communication)** and evolves as
additional tasks and events are added in later modules.

The goal is to make message flow **explicit, understandable, and traceable**.

---

## Why Message Flow Matters

In real-time systems, message-based communication is often preferred over shared memory
because it:

- Reduces unsafe coupling between tasks
- Makes system behavior easier to reason about
- Improves testability and observability
- Helps avoid race conditions and unintended blocking

This document serves as a reference for how tasks exchange information and coordinate behavior.

---

## Core Message Concepts

Within this project:

- **Messages** represent structured information passed between tasks
- **Queues** provide controlled buffering and blocking behavior
- **Producers** generate messages
- **Consumers** receive and act on messages

Message contents are intentionally abstract and represent *logical system information* rather
than physical measurements.

---

## Example Message Flow (Conceptual)

The following example illustrates a typical producer–consumer flow:

```
+-------------------+        +-------------------+        +-------------------+
|   Task A          | -----> |   Message Queue   | -----> |   Task B          |
| (Producer)        |        |                   |        | (Consumer)        |
+-------------------+        +-------------------+        +-------------------+
```

- Task A creates and sends messages at a defined rate
- The message queue buffers messages and enforces blocking or timeouts
- Task B receives messages and performs processing or decision-making

---

## Message Types (Example)

Teams may define message structures such as:

- Status updates
- Health or watchdog notifications
- Event notifications
- Control or coordination messages

The exact structure and content are up to the team, but messages should remain:

- Small
- Clearly defined
- Easy to log or print for evidence

---

## Blocking and Timing Considerations

When designing message flow, consider:

- Queue length (too small vs. too large)
- Blocking vs. non-blocking receives
- Timeout values
- Interaction with task priorities

Poor message design can introduce:

- Excessive blocking
- Missed deadlines
- Starvation
- Unpredictable latency

---

## Interaction with Synchronization

Message queues may be used in combination with synchronization mechanisms:

- Shared state protected by mutexes
- Coordination signals using semaphores
- Event notifications from ISR context

Ensure that message handling does not introduce unsafe blocking or priority inversion.

---

## Updating This Document

Update this document when you:

- Add new message types
- Change producer/consumer relationships
- Modify queue sizing or blocking strategy
- Introduce event-driven message generation

Keeping message flow documentation current improves both grading and team communication.

---

## Final Note

Clear message flow design is a hallmark of well-structured real-time systems.

Use this document to explain not just **what messages exist**, but **why they are designed
the way they are**.
