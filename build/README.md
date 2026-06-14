# Build and Run Notes

## Purpose

This folder contains high-level guidance for building and running the CESC 450 course project.
It is intended to supplement (not replace) the Module 2 guided lab instructions in Canvas.

If there is any conflict between this file and the Module 2 lab guide, follow the lab guide.

---

## Build Overview

This project uses a **host-based RTOS configuration**, so it can be built and run without physical hardware.

General workflow:

1. Configure your development environment (toolchain and dependencies)
2. Build the project successfully
3. Run the executable and confirm expected output

---

## Authoritative Instructions

The authoritative build/run steps for your current term are provided in:

- Module 2 Guided Lab (Canvas)
- Course announcements (if updates are posted)

---

## Quick Troubleshooting Checklist

Before asking for help, verify:

- You are in the correct repository folder (project root)
- You pulled the latest version of the repository
- Your compiler/toolchain is installed correctly
- Your PATH/environment variables are set correctly (if required)
- You are using the correct build command for your platform

---

## Clean Build Guidance

If you encounter unexpected build behavior:

- Remove old build artifacts (if your build system generates them)
- Re-run the build from a clean state
- Re-run the executable and confirm output

Note: Do not delete `build/README.md`. This folder may also contain build notes or artifacts depending on your tooling.

---

## When Requesting Help (Include This Information)

When asking your instructor or teammates for help, include:

- Operating system (Windows/macOS/Linux)
- Build command you ran
- Full error message text (copy/paste)
- Screenshot of the terminal output (if possible)
- Any steps you already tried

Providing complete build evidence makes it much easier to diagnose issues quickly.

---
