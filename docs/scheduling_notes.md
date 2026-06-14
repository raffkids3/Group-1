# Scheduling Notes and Design Decisions

## Purpose

This document records **task scheduling decisions** made throughout the course project.
It serves as a place to explain *why* tasks have particular priorities, timing parameters,
and blocking behavior.

You are encouraged to update this document as the system evolves, especially during
Modules 4, 7, and 8.

---

## Initial Scheduling Assumptions

At early stages of the project (Modules 2–3), scheduling decisions are typically simple:

- Tasks may have similar or default priorities
- Timing behavior may rely on basic delays
- Blocking behavior is minimal

As additional real-time mechanisms are introduced, these assumptions should be revisited.

---

## Task Priority Decisions

For each major task, consider documenting:

- Task name
- Assigned priority
- Reason for the chosen priority
- Interaction with other tasks

Example:

- **Task:** Data Acquisition Task  
  **Priority:** Medium  
  **Rationale:** Runs periodically and should not starve lower-priority logging tasks,
  but must complete before downstream processing.

---

## Timing and Blocking Considerations

Use this section to note:

- Periodic rates and deadlines
- Expected execution time (qualitative or measured)
- Blocking points (queues, mutexes, delays)
- Timeout values and why they were chosen

Documenting this helps explain responsiveness and reliability behavior later.

---

## Event-Driven Scheduling

When event-driven behavior is added (Module 7), consider documenting:

- What events exist
- Which task handles each event
- Why event handling is deferred to task context
- How event frequency impacts scheduling

---

## Changes Made During Integration (Module 8)

During system integration and stabilization, record:

- Observed scheduling problems (e.g., missed deadlines, starvation)
- Changes made to priorities or timing
- Evidence that behavior improved after changes

This section is especially useful for the final project report.

---

## Final Notes

Scheduling decisions are rarely static in real-time systems.
This document should reflect how and why the system’s scheduling evolved as complexity increased.

Clear scheduling notes strengthen both system understanding and grading outcomes.
