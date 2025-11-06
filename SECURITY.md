# Security Policy

## 🛡️ Supported Versions

The following versions of **Penny-DOS** are currently being supported with security updates and patches:

| Version | Supported |
|----------|------------|
| main (development branch) | ✅ Yes |

If you are running an older or modified version, please update to the latest stable or main branch build before reporting any security issue.

---

## 🔐 Reporting a Vulnerability

If you discover a security vulnerability in **x16 OS**, please open a public issue.


Please include:
- A detailed description of the vulnerability
- Steps to reproduce (if possible)
- Impact assessment (what could an attacker gain or disrupt)
- Suggested fix (if you have one)

We aim to acknowledge all reports within **48 hours** and provide a status update within **5 business days**.

---

## 🔎 Scope

This policy applies to:
- Kernel and bootloader code
- Core utilities distributed with x16 OS
- System libraries and DOS API extensions
- Installer, updater, and configuration utilities

It **does not** apply to:
- Third-party software or drivers
- User-contributed scripts or extensions
- Out-of-tree builds or forks

---

## 🧩 Handling Process

1. **Triage** – We review the report and confirm the issue.
2. **Reproduction** – We validate and reproduce it in a secure environment.
3. **Fix Development** – We patch the issue in a private branch.
4. **Coordinated Release** – The fix is merged publicly after testing and version tagging.

---

## 🧱 Security Best Practices

If you’re contributing to x16 OS:
- Avoid using unsafe C/C++ functions (e.g., `gets`, `strcpy`, `sprintf`)
- Validate all user and hardware input
- Follow principle of least privilege in drivers and interrupt handlers
- Use fixed-size buffers with boundary checks
- Report any unexpected kernel panic or memory corruption behavior

---

## 📄 Credits

We thank the open-source community and all independent researchers who help make Penny-DOS a more secure and reliable system.

If you’d like to be acknowledged in future security advisories, please include your preferred name and link when submitting a report.
