# Messages and Inter-Task Communication

## Purpose

This document describes the **message-based communication** used in the CESC 450
real-time embedded system project.

Messages represent structured information exchanged **between tasks** to support
coordination, decision-making, and system monitoring.

This document focuses on **what messages mean and how they are used conceptually**,
not on specific RTOS API calls or implementation details.

---

## Student Guidance

This file is part of the course project documentation and is used to explain
the **intent and role of messages** in your system.

You are expected to:

- Describe what message types exist in your system
- Explain what information each message conveys
- Identify which tasks produce and consume each message
- Keep message definitions consistent with your implementation

You are NOT expected to:

- Include RTOS queue API calls
- Include C struct definitions or code
- Duplicate lab instructions

This document should remain **conceptual, concise, and system-focused**.

---

## What Is a Message in This Project?

A message is a structured unit of information that:

- Is created by one task
- Is delivered to one or more other tasks
- Represents logical system information
- Supports coordination without unsafe shared memory access

In real-time systems, message queues are commonly used because they:

- Enforce ordering
- Support blocking or timed waiting
- Improve system traceability
- Reduce unintended coupling between tasks

---

## Message Flow Overview

Messages typically flow between tasks in a producer–consumer or pipeline pattern.

Example (conceptual):

```
Task A (Producer)  -->  Message Queue  -->  Task B (Consumer)
```

Some systems may include additional stages or branching consumers.

Refer to `docs/message_flow.md` for a visual overview of task-to-task communication.

---

## Defined Messages (Conceptual)

The following message types illustrate common communication patterns.
Teams may extend this list as needed, provided new messages are documented here.

### MESSAGE_STATUS_UPDATE

**Description:**  
Represents a periodic or event-driven update about system state or health.

**Produced By:**  

- Monitoring or acquisition task

**Consumed By:**  

- Logging task  
- Decision or control task

**Typical Use:**  

- Reporting system heartbeat  
- Communicating status changes

---

### MESSAGE_EVENT_NOTIFICATION

**Description:**  
Indicates that an asynchronous event has occurred and requires task-level handling.

**Produced By:**  

- Event-handling task (after ISR-safe signaling)

**Consumed By:**  

- Processing or coordination task

**Typical Use:**  

- Responding to alerts  
- Triggering follow-up actions

---

### MESSAGE_WATCHDOG_ALERT

**Description:**  
Indicates a timing fault, missed deadline, or stalled behavior detected by a watchdog.

**Produced By:**  

- Watchdog or timing-monitoring task

**Consumed By:**  

- Logging task  
- Supervisory or recovery task

**Typical Use:**  

- Recording timing violations  
- Initiating mitigation strategies

---

## Message Design Guidelines

When designing messages, consider:

- Keeping messages **small and well-defined**
- Avoiding unnecessary fields
- Ensuring message meaning is clear from documentation
- Designing messages that are easy to log or print for evidence

Poor message design can lead to:

- Excessive blocking
- Missed deadlines
- Hard-to-debug system behavior

---

## Interaction with Shared State and Events

Messages may be used alongside:

- Shared state (protected by mutexes)
- Event-driven notifications
- Timing-based triggers

Ensure that message handling does not introduce unsafe blocking
or priority inversion.

---

## Evidence Expectations

When demonstrating message-based communication, capture evidence showing:

- Messages being sent and received
- Order and timing of message flow
- Task behavior in response to messages

Refer to **EVIDENCE.md** for detailed submission guidance.

---

## Updating This Document

Update this file when you:

- Add new message types
- Change message meaning or flow
- Modify which tasks produce or consume messages

Keeping message documentation current improves system clarity,
team communication, and grading outcomes.

---

## Final Note

Clear message definitions are essential for reliable real-time systems.

Use this document to explain not just **what messages exist**, but **why they
are structured and routed the way they are**.