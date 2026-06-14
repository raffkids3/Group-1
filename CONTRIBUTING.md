# CONTRIBUTING – Team Workflow and Expectations

## Purpose of This Document

This document defines **how your team is expected to work together** in the course project
repository.

The goal is to maintain a **stable, professional codebase** while multiple people contribute
concurrently. These expectations mirror common industry practices for collaborative software
development.

---

## General Workflow Expectations

- This repository represents a **single cumulative system**
- Work incrementally and preserve existing functionality
- Avoid large, untested changes
- Commit early and commit often
- Use clear commit messages

The `main` branch should always be in a **buildable, runnable state**.

---

## Branching Strategy

Use the following workflow unless instructed otherwise:

1. **Do not work directly on `main`**
2. Create a new branch for each lab or feature:
   ```
   feature/module3-tasks
   feature/module4-timers
   feature/module6-ipc
   ```
3. Make and test your changes locally
4. Push the branch to the repository
5. Open a pull request (PR) into `main`

This helps prevent conflicts and accidental breakage.

---

## Pull Request Expectations

Every pull request should include:

- A clear description of what was changed
- The module or lab the change corresponds to
- Instructions for how to build and observe the behavior
- Evidence (logs, screenshots, or notes) if behavior changes

Pull requests should be **reviewed by at least one teammate** before merging when possible.

---

## Commit Message Guidelines

Use short, descriptive commit messages.

Good examples:
- `Add periodic timer and watchdog check`
- `Implement message queue between producer and consumer`
- `Protect shared status structure with mutex`

Avoid vague messages like:
- `Fix stuff`
- `Update code`
- `Changes`

---

## Keeping the Project Stable

Before opening a pull request, verify:

- The project builds without errors
- The system runs and produces expected output
- Previously implemented functionality still works

If your change introduces a temporary breakage:
- Document it clearly in the pull request
- Fix it before merging into `main`

---

## Handling Conflicts

If you encounter merge conflicts:

1. Pull the latest changes from `main`
2. Resolve conflicts locally
3. Rebuild and test the project
4. Commit the resolved changes
5. Update the pull request

Ask your teammates or instructor for help if needed.

---

## Documentation Expectations

As the project grows, update documentation when appropriate:

- Add notes to `docs/architecture.md` when structure changes
- Update `docs/message_flow.md` when new messages are added
- Record scheduling or timing decisions in `docs/scheduling_notes.md`

Clear documentation improves both grading and teamwork.

---

## Professional Conduct

- Communicate respectfully with teammates
- Do not overwrite or delete others’ work without discussion
- Treat this repository as a professional engineering artifact

---

## Final Reminder

This project is evaluated as both a **technical system** and a **collaborative effort**.

Good teamwork, clear communication, and disciplined version control
are part of professional real-time embedded systems engineering.
