# Tasks (Student Work Area)

## Purpose

This directory contains RTOS task implementations.
Starting in **Module 3**, you will add one or more task source files here.

Tasks represent the primary concurrent execution units in the system.

---

## What Students Should Do

- Create task implementation files (e.g., `task_sensor.c`, `task_logger.c`)
- Ensure tasks:
  - Run concurrently
  - Yield or delay appropriately
  - Produce observable output for evidence

Task entry points should be declared in `project.h` and created in `main.c`.

---

## What Students Should NOT Do

- Do not put all logic in `main.c`
- Do not remove existing tasks when adding new ones
- Do not hard-code timing values without explanation

---

## Evidence Expectations

- Console output showing interleaved task execution
- Notes explaining how concurrency is observed
