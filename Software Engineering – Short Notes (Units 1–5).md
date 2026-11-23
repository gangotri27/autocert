# Software Engineering – Short Notes (Units 1–5)

Quick revision notes covering every topic and sub-topic of all 5 units.

## UNIT 1 – Introduction, Process Models, Agile & DevOps

### 1.1 Basics

- **Engineering:** designing and building things to solve problems.
- **Software:** programs (instructions) + data structures + documentation.
- **Software Engineering (SE):** systematic, disciplined approach to develop, operate and maintain software.
- **Why SE is important:** (i) brings discipline to chaotic work; (ii) ensures high quality; (iii) builds complex systems on time using deadlines and milestones.
- **Real-world uses:** healthcare (EHR), e-commerce (Amazon, Flipkart), mobile apps (WhatsApp, Uber).

### 1.2 Nature of Software

- **Evolving role – dual:** (a) *Product* – delivers hardware's computing potential; an information transformer. (b) *Vehicle* – delivers other products (OS, networks, software tools).
- **Characteristics:** intangible; complex; evolves over time; no wear and tear (but can become outdated); high dependability.
- **Software vs Hardware:** software is logical, has no spare parts, requirements change, copies are cheap, follows the idealized curve. Hardware is physical, has spare parts, requirements fixed before manufacture, copies are costly, follows the bathtub curve.
- **Bathtub curve (hardware):** (1) Infant mortality – decreasing failures (manufacturing defects); (2) Constant failure rate – service life; (3) Wear-out – increasing failures (dust, heat, etc.).
- **Idealized curve (software):** only decreasing + constant phases (no wear-out). **Actual curve:** every change causes a spike, so it stays above the idealized curve.
- **Work product:** engineer's view = programs + data + documents; user's view = functionality delivered.
- **SE focuses on:** Quality (functional = correct software; non-functional = robustness, security) and Maintainability (easy to enhance and adapt).

### 1.3 Software Application Domains

Web apps, mobile apps, enterprise apps (CRM, HR, accounting), embedded systems, scientific/engineering apps (CAD, weather), AI/ML, gaming.

### 1.4 Legacy Software

- **Definition:** old software built on outdated technology but still vital to daily operations; hard to maintain/upgrade.
- **Types:** old operating systems (Windows XP in hospitals), mainframes (banks), custom-built apps, outdated business apps (old POS), obsolete databases.
- **Users:** government (COBOL, IRS), unemployment systems, banks (RBS), background-check systems, retail.
- **Why still used:** fear of uncertainty, budget limits, operational risk/downtime, custom solutions that work, training and transition cost.
- **What can be done:** modernization, integration (APIs/middleware), re-engineering, replacement, maintenance and support, data migration, training.

### 1.5 Software Myths

- **Management myths:** "add more programmers to speed up" (it slows down – training and communication overhead); "a book has all procedures" (every project is unique); "use same methods as 10 years ago" (methods must evolve).
- **Customer myths:** "a general idea is enough" (detailed requirements needed); "changes are easy anytime" (late changes are costly).
- **Practitioner myths:** "once the program works, job is done" (testing still needed); "can't judge quality until it runs" (reviews, static analysis exist); "working software is the only deliverable" (documentation, guides matter too).

### 1.6 SE – A Layered Technology

Four layers (bottom to top): **Quality focus** (bedrock) → **Process** (what and when) → **Methods** (how, e.g. UML) → **Tools** (automation, e.g. Git).

### 1.7 Software Process Framework

- Organized approach combining process, methods and tools; general enough for any project.
- **Framework activities:** communication, planning, modeling, construction, deployment.
- **Umbrella activities:** ongoing tasks across the whole project (risk management, SQA, SCM, measurement, formal technical review).
- **Task sets** break activities into small tasks; **engineering actions** produce work products; activities are **iterated** until standards are met.

### 1.8 Generic Process Model

1. **Communication** – gather requirements and scope from stakeholders.
2. **Planning** – roadmap: tasks, schedule, resources, risks (e.g. Gantt chart).
3. **Modeling** – diagrams/models of structure and behavior.
4. **Construction** – coding + testing.
5. **Deployment** – deliver to customer, collect feedback.

**Umbrella activities in brief:** Risk management (identify and mitigate); SQA (planned reviews/testing); SCM (track changes and versions, e.g. Git); Measurement (cost, time, resources); FTR (regular technical review meetings).

### 1.9 Software Process, Process Model and SDLC

- **Software process:** set of activities, methods, practices and tools used to build and maintain software.
- **Process model:** structured plan describing how the process is carried out.
- **SDLC stages:** requirement gathering → design → implementation → testing → deployment → maintenance.
- **Model families:** Waterfall, Incremental, Evolutionary (Iterative, Prototype, Spiral, Concurrent), Agile.

### 1.10 Waterfall Model

- Linear, sequential; finish a phase before the next; no going back.
- **Phases:** requirement and analysis → system design → implementation → testing → deployment → maintenance.
- **Pros:** simple, easy to manage, well documented, good for small projects with clear requirements.
- **Cons:** rigid, late changes costly, customer sees product only at the end, unsuitable for large/complex projects.

### 1.11 Incremental Process Model

- Project split into **increments**; each goes through communication → planning → modeling → construction → deployment.
- Example: shopping app – increment 1 browsing/cart, 2 payment, n tracking/reviews.
- **Pros:** early working software, easier testing, flexible, lower risk.
- **Cons:** integration is complex, needs detailed planning, early versions lack full functionality, repeated testing raises cost.
- **Waterfall vs Incremental:** Waterfall for fixed requirements, rigid; Incremental for changing requirements, flexible with feedback.

### 1.12 Evolutionary Process Models

Flexible models that improve the product through feedback; they embrace change.

**a) Iterative Model** – build in small steps, refine each iteration. Steps: initial planning → requirements → analysis and design → implementation → development → testing → evaluation → refinement. *Pros:* early problem detection, continuous feedback, better quality. *Cons:* time-consuming, costly. *Use when:* requirements not fully known.

**b) Prototype Model** – build a quick working version for user feedback. Steps: communication → quick plan → quick design → build prototype → deploy and get feedback → refine (repeat). *Pros:* early feedback, flexible, reduces risk. *Cons:* time-consuming, users may mistake prototype for final product, costly. *Use when:* users unsure of requirements or features are new.

**c) Spiral Model** – iterative + risk analysis in every cycle. Steps: communication → planning (cost, time, **risk analysis**) → modeling → construction → deployment. *Pros:* risk-focused, flexible, early testing. *Cons:* expensive, complex, time-consuming. *Use when:* large, high-risk projects (banking, healthcare).

**d) Concurrent Development Model** – activities (design, coding, testing) run in parallel. Task states: inactive → under development → under review → awaiting changes → under revision → baselined → done. *Pros:* faster, flexible, early problem detection. *Cons:* complex, needs coordination, overlap issues. *Use when:* large, complex, speed-critical projects.

### 1.13 Agile

- **Agile:** flexible approach; adapt and change as you go; release a basic version and improve with feedback.
- **Agile Manifesto (2001) – 4 values:** individuals and interactions > processes and tools; working software > comprehensive documentation; customer collaboration > contract negotiation; responding to change > following a plan.
- **12 principles (short):** (1) customer satisfaction through early/continuous delivery; (2) welcome changing requirements; (3) deliver working software frequently; (4) daily business–developer collaboration; (5) motivated individuals; (6) face-to-face communication; (7) working software = progress; (8) sustainable pace; (9) technical excellence; (10) simplicity; (11) self-organizing teams; (12) regular reflection (retrospective).
- **Advantages:** customer satisfaction, faster delivery, flexibility, better quality, collaboration, predictable cost/schedule, early risk identification.
- **Disadvantages:** not suited to highly complex projects needing strict planning, needs strong leadership, tight deadlines, little documentation.
- **Frameworks:** Scrum, Kanban, XP, Lean, FDD, Crystal, DSDM, AUP, SAFe, LeSS (also RUP, ASD).

### 1.14 Scrum

- Agile framework; work done in **Sprints** (usually 2–4 weeks). Created by Ken Schwaber and Jeff Sutherland (early 1990s; introduced 1995); name from rugby.
- **Roles:** *Product Owner* (customer needs, owns/prioritizes Product Backlog); *Scrum Master* (coach, removes obstacles); *Development Team* (builds product).
- **Artifacts:** Product Backlog (all work, prioritized); Sprint Backlog (tasks for current sprint); Increment (completed work so far); Burn-down chart (work left vs time); Scrum/Task board (To Do – In Progress – Done).
- **Events:** Daily Scrum (15 min: yesterday, today, problems); Sprint Review (demo to stakeholders); Sprint Retrospective (what went well/what to improve).
- **Pros:** quick progress, flexible, collaboration, continuous improvement. **Cons:** confusing roles, hard to change mid-sprint, needs discipline, not ideal for very large projects, depends on Product Owner.

### 1.15 Agile vs DevOps

- Agile: fast development cycles; stops after development, testing, deployment; separate teams for dev/test/ops.
- DevOps (mid-2000s): extends to operations with **continuous monitoring**; merges roles so everyone owns the full life cycle.
- **Waterfall** = fixed requirements; **Agile** = changing requirements, fast development; **DevOps** = changing requirements + fast development *and* operations.
- **Use case – Facebook 2011:** launched Timeline, Music, Ticker to 500M users at once → server meltdown. DevOps (dev + ops together) and **dark launching** (release to a small group first) fixed it.

### 1.16 DevOps

- **DevOps = Development + Operations;** shortens the development life cycle and delivers high-quality software via automation and collaboration.
- **Key practices:** continuous development, testing, integration, deployment, monitoring.
- **Tools:** Version control (Git, SVN); Build (Maven, Ant); Planning (JIRA); CI (Jenkins, Bamboo, Hudson); Deployment (Docker, Vagrant, Kubernetes); Monitoring (Nagios, Splunk, ELK).
- **DevOps lifecycle (loop):** Continuous Development → Continuous Testing → Continuous Integration → Continuous Deployment → Continuous Monitoring.
- **DevOps stages:** (1) Version Control (Git, SVN, Mercurial); (2) Continuous Integration (Jenkins, Travis CI, CircleCI); (3) Continuous Delivery – auto-deliver to test/pre-production, UAT (Jenkins, GitLab, Bamboo); (4) Continuous Deployment – auto-release to production (Docker, Kubernetes, Ansible, Chef); plus Continuous Monitoring across all stages (Nagios, Splunk, New Relic, Prometheus).
- **Delivery pipeline (8 phases):** Plan → Code → Build → Test → Integrate → Deploy → Operate → Monitor.

## UNIT 2 – Requirements, SRS, Feasibility, Git & GitHub

### 2.1 Software Requirements

Describe what the system should do and how it should perform. Two types: functional and non-functional.

### 2.2 Functional Requirements

- Specific actions/services the system must perform (what the system does).
- Examples: search items, unique order ID per order, view documents.
- Good ones are **complete** (all services) and **consistent** (no contradictions).

### 2.3 Non-Functional Requirements (NFR)

- How well the system performs (speed, security, reliability). Examples: respond within 2 s, 1,000 concurrent users, 99% availability.
- **Types:** *Product* (speed, memory, e.g. < 500 MB); *Organizational* (company policies, e.g. must use Python); *External* (laws, other systems, e.g. data privacy laws).

| Aspect | Functional | Non-functional |
| --- | --- | --- |
| Describes | Actions/tasks | Qualities |
| Type | Mandatory | Often optional but important |
| Captured in | Use cases | Quality attributes |
| Testing | Functional testing | Performance etc. |
| Example | Allow placing orders | Handle 1,000 orders/s |

### 2.4 User vs System Requirements

- **User requirements:** plain language, what users want (e.g. "manage orders easily"); gathered by interviews, surveys, workshops; used by users and stakeholders; high-level.
- **System requirements:** technical, how the system fulfils user needs (e.g. "store orders in DB, generate unique IDs; support 500 users"); used by developers, testers, architects; detailed; guide development and testing.

### 2.5 SRS (Software Requirements Specification)

- Detailed document of exactly what software should do – the blueprint.
- **Why needed:** clarity, guides development, communication tool, manages changes, helps testing.
- **Characteristics of a good SRS:** correct, unambiguous, complete, consistent, ranked for importance/stability, verifiable, modifiable, traceable.
- **IEEE SRS template:**
  1. *Introduction* – purpose, document conventions, intended audience, product scope, references.
  2. *Overall description* – product perspective, product functions, user classes, operating environment, design/implementation constraints, user documentation, assumptions and dependencies.
  3. *External interfaces* – user, hardware, software, communication interfaces.
  4. *System features* – description and priority, stimulus/response sequences, functional requirements.
  5. *Other non-functional* – performance, safety, security, quality attributes, business rules.
  6. *Annexures* – glossary, analysis models, TBD list.

### 2.6 Requirements Engineering (RE)

- Structured process to understand, document, validate and manage what a system must do.
- **Goals:** define requirements, minimize errors, guide development. **Importance:** better communication, saves cost/time, reduces risk.
- **If neglected:** misunderstandings, scope creep, project failure.
- **Steps:** Feasibility study → Elicitation → Analysis → Documentation (SRS) → Validation → Management.

### 2.7 Feasibility Study

Checks whether the project is practical. Benefits: risk mitigation, efficient resource use, informed decisions.

- **Technical** – tools, skills, technology available?
- **Operational** – fits existing workflows, users can adapt?
- **Economic** – benefits > costs, ROI.
- **Legal** – laws/regulations (e.g. HIPAA, GDPR).
- **Schedule** – can it be done in time?
- Example: bank mobile app is checked on all five.

### 2.8 Requirements Elicitation

- Gathering needs, expectations and constraints from stakeholders.
- **Stakeholders:** end-users, managers, developers, regulators.
- **Methods:** *Interviews* (structured/unstructured); *Brainstorming* (idea generation, evaluation); *FAST* – facilitated group meeting; *QFD* – converts customer needs into technical specs (House of Quality); *Use case approach* – actors and scenarios; *Ethnography* – observe users at work.
- **Challenges:** communication barriers, changing requirements, unstated requirements.

### 2.9 Requirements Analysis

- Refine, validate and prioritize requirements. Objectives: clarity, conflict resolution, prioritization.
- **Steps:** gap analysis (find missing needs); conflict resolution (compromise/prioritize); feasibility analysis.
- **Importance:** avoids scope creep, ensures quality, reduces cost.

### 2.10 Validation, Management, Monitoring

- **Validation:** check requirements reflect real needs and are feasible. Methods: requirements reviews, prototyping, test-case generation. Avoids costly errors and aligns expectations.
- **Management:** control changes through the life cycle – tracking changes, impact analysis, communication.
- **Monitoring:** continuously track progress against requirements – early issue detection, keeps project on track.

### 2.11 Version Control System (VCS)

- Tracks changes to files, stores all versions, allows revert and teamwork (like "track changes" for code).
- **Benefits:** history, collaboration, easy recovery.
- **Types:** *Local* (on one computer; crash = loss); *Centralized* (one server; server failure risk); *Distributed* (every user has full copy and history – safest, works offline).

### 2.12 Git and GitHub

- **Git:** free, open-source distributed VCS created by Linus Torvalds (2005) for the Linux kernel; supports branching, non-linear development, full history.
- **Git workflow:** Working directory → Staging area → Repository (edit → stage → commit).
- **GitHub:** web platform hosting Git repos (owned by Microsoft since 2018). Features: project management, secure code packages, collaboration, pull requests (code review), security tools, code hosting.
- **Alternatives:** GitLab, Bitbucket, AWS CodeCommit, SourceForge.

| Git | GitHub |
| --- | --- |
| Software tool, installed locally | Online hosting platform |
| Command line | Graphical web interface |
| Version control | Sharing and collaboration |
| By Linus Torvalds | Owned by Microsoft |

### 2.13 Basic Git Commands

- `git --version` – check installation.
- `git config --global user.name/user.email` – set identity.
- `git init` – create a new repository (.git folder).
- `git status` – state of working directory/staging.
- `git add .` / `git add file` – stage changes.
- `git commit -m "msg"` – save snapshot to local repo.
- `git diff` – show changes not yet staged.
- `git help <command>` – documentation.

### 2.14 Branches, Checkout, Merge, Log, Revert

- **Branch:** separate copy to work without affecting main. Types: main/master, feature, bug-fix, release.
- `git branch name` (create), `git branch -a` (list all), `git branch -d name` (delete).
- `git checkout name` (switch), `git checkout -b name` (create + switch).
- `git merge name` – merge that branch into current branch.
- `git log` – full history (hash, author, date, message); `git log --oneline` – short view.
- `git revert <hash>` – new commit that undoes an earlier one (history preserved).

### 2.15 Remote Repositories

- `git remote add origin <url>`, `git remote -v`, `git remote remove <name>`.
- **SSH key:** `ssh-keygen -t rsa`; private key stays local, copy public key (id\_rsa.pub) to GitHub → Settings → SSH and GPG keys → New SSH key.
- `git clone <url>` – download a copy of a remote repo.
- `git push origin master` – send local commits to remote.
- `git pull origin master` – fetch and merge remote changes.
- **Fork:** personal copy of someone's repo (GitHub Fork button); propose changes with a pull request.
- **Typical flow:** clone → change → commit → push → pull others' changes.

### 2.16 Git Patch

- Text file of changes between commits (output of `git diff`).
- Create: `git format-patch -1 <hash>` (1 commit) or `git format-patch -3` (last 3). Apply: `git apply file.patch`.

### 2.17 Merge Conflict

- Occurs when Git cannot auto-combine changes (e.g. same line edited in two branches). Shown with `<<<<<<< HEAD`, `=======`, `>>>>>>> branch` – above `=======` is current branch, below is merging branch; resolve manually.
- **Types:** content (edit–edit); delete–modify; rename–modify/delete; directory–file; submodule; binary file; file mode; index conflicts (e.g. during rebase).

## UNIT 3 – Design Engineering, UML, Maven & Jenkins

### 3.1 Design Process and Design Quality

- **Design engineering:** turns *what* the software should do (requirements) into *how* it will do it – the blueprint.
- **Design model parts:** data/class design, architecture, interface design, component-level design (analysis model → design model).
- **Design process:** iterative; refined step by step; checked so that it meets requirements, is understandable (build, test, maintain) and gives a complete picture.
- **Quality attributes – FURPS:** **F**unctionality (features, security); **U**sability (ease of use); **R**eliability (consistent, no failures); **P**erformance (speed, load); **S**upportability (maintain, upgrade, test).
- **Design guidelines:** familiar structure/patterns; modular design; clear representation; good class structure; independent parts; simple connections; based on requirements; clear communication (diagrams).

### 3.2 Design Concepts

- **Abstraction:** hide detail, show essentials – *procedural* (process without detail), *data* (group related data, e.g. Student), *control* (simplify control flow).
- **Refinement:** big idea broken into detailed steps (manage records → add/update/delete).
- **Modularity:** split into independent modules, one task each.
- **Architecture:** blueprint of how big parts fit and communicate.
- **Information hiding:** keep internals hidden, expose only what is needed; limits spread of errors.
- **Control hierarchy:** which module controls which (like manager–employee).
- **Structural partitioning:** *horizontal* (layers: input, processing, output); *vertical* (control flows top to bottom).

### 3.3 Design Model Elements

- **Data design:** how data is organized. **Architectural design:** overall structure (floor plan). **Interface design:** with users (UI), other systems (APIs), internal components. **Component-level design:** detailed small parts (e.g. Login). **Deployment-level design:** where parts run (server, user computer).
- **UML diagrams used:** class, use case, sequence, activity, state, component, deployment.

### 3.4 Architectural Design

- Blueprint of structure, interaction, maintainability and scalability. **Purpose:** well-organized, easy to maintain, handles growth, understood by all.
- **Software architecture:** big-picture structure (food app: UI + payment + delivery tracking).
- **Architectural styles (general layout):**
  - *Layered* – layers (UI, business logic, data).
  - *Data-centered* – central database as single source of truth.
  - *Data-flow* – data passes through processing steps (photo filters).
  - *Call and return* – components call each other (calculator).
  - *Object-oriented* – real-world objects (Car, Customer, Rental).
- **Architectural patterns (specific reusable solutions):**
  - *MVC* – Model (data), View (display), Controller (input/updates).
  - *Microservices* – small independent services (payment, inventory, accounts).
  - *Monolithic* – single tightly-connected unit.
  - *Event-driven* – responds to events in real time (notifications).
- **Style vs Pattern:** style = broad, high-level organization (layered); pattern = specific solution to a known problem (MVC).
- **Context model:** diagram showing how the system interacts with the outside (users, systems, devices) and information flow. ATM example: user, bank database, card reader, cash dispenser.

### 3.5 Conceptual Model of UML

- **UML:** diagrams that show how a system works (blueprint of software).
- **CASE tools:** Rational Rose, Enterprise Architect, MS Visio, Lucidchart, StarUML, ArgoUML, Visual Paradigm, Balsamiq, Creately, SmartDraw, Umbrella.
- **Three building blocks:** things, relationships, diagrams.
- **Things:** *Structural* (class, interface, component, node); *Behavioral* (interaction, state machine); *Grouping* (package); *Annotational* (note).
- **Relationships:** *Dependency* (needs another to work; dashed arrow); *Association* (simple link; solid line); *Generalization* (inheritance, Car → SUV); *Realization* (class follows interface, Bird → Flyable).
- **9 diagram types:** class, object (snapshot of an instance), use case, sequence, component, activity, state-chart, collaboration, deployment.

### 3.6 Use Case Diagram

- Shows system from the user's view: actors, actions, boundaries.
- **Parts:** *Actor* (stick figure; can generalize, e.g. Commercial Customer → Customer); *Use case* (oval); *System boundary* (rectangle); *Association* (line); *Directed association* (arrow shows who initiates); *Multiplicity* (0..1, 1..\*).
- **Special relations:** `<<include>>` – mandatory (Withdraw Cash includes Authenticate); `<<extend>>` – optional (Check Balance extends Withdraw Cash).
- **Steps (ATM):** identify actors (Customer, Bank) → identify use cases (withdraw, check balance, deposit, transfer, change PIN) → draw boundary, ovals, actors, lines → add include/extend.

### 3.7 Class Diagram

- Static structure: classes, attributes, methods, relationships. Class box has 3 parts: name / attributes / methods.
- **Visibility:** `-` private, `+` public, `#` protected.
- **Relationships:** association (solid line); inheritance/generalization (hollow arrow to parent); aggregation (hollow diamond – part can exist alone, classroom–students); composition (filled diamond – part cannot exist alone, house–rooms); dependency (dashed arrow); realization (dashed line + hollow arrow to interface).
- **ATM steps:** identify classes (ATM, Customer, Bank Account, Transaction) → attributes → methods → relationships. Real examples: e-commerce (Customer, Product, Order), library (Book, Member, Librarian inherit Person).

### 3.8 Sequence Diagram

- Shows how objects interact **over time**, in message order.
- **Components:** actors, objects, lifelines (dotted vertical lines with activation boxes), messages (arrows with direction and order).
- **ATM withdrawal flow:** insertCard → requestPIN → enterPIN → authenticateUser → authenticationResult → requestAmount → enterAmount → withdrawMoney → transactionConfirmation → dispenseCash.

### 3.9 Component Diagram

- Shows system divided into components (reusable, replaceable, modular) connected through interfaces.
- **Symbols:** component (rectangle with two tabs); provided interface (lollipop); required interface (socket); dependency (dashed arrow); connector (solid line).
- **ATM components:** ATM machine (UI, card reader, cash dispenser), bank database, network.
- **Use:** understand organization, easy to change parts, ensures modularity.

### 3.10 Build Tools – Maven

- Java project management/build tool: compiles, tests, packages, manages dependencies automatically.
- **POM (pom.xml):** XML file with groupId, artifactId, version, dependencies.
- **Build lifecycle:** `mvn clean` → `mvn compile` → `mvn test` → `mvn package` → `mvn install` (local repo) → `mvn deploy` (remote repo).
- **Outputs:** JAR (standalone app), WAR (web app); stored in the `target` folder.
- **Repositories:** local (your computer, checked first), central (online community store), remote (custom location).
- **Install:** download → extract → set JAVA\_HOME and MAVEN\_HOME → add to PATH → verify with `mvn -version`.

### 3.11 Jenkins and Continuous Integration

- **Jenkins:** free tool automating build, test, deploy (CI/CD).
- **Plugins:** add-ons that add skills, connect tools (Git, Slack), custom steps, installed via Plugin Manager. Popular: Git, Slack, Pipeline.
- **Features:** automation, integration (Git, Maven), plugins, distributed builds, customizable, monitoring/reporting, pipeline support.
- **Workflow:** code repository → trigger → checkout → build → test → archive artifact → notify.
- **CI:** developers merge code often; each merge is built and tested automatically. **CD:** automatically delivers to staging/production.
- **Set up CI:** install Jenkins → New Item (Freestyle project) → configure source code (Git URL) → build steps (Maven `clean install`, Gradle `clean build`) → post-build actions → save and run → optional webhooks.
- **Architecture:** *Master* (schedules jobs, distributes tasks, monitors slaves, shows results) and *Slaves* (agents that run builds/tests).
- **CI flow:** developer commits → Jenkins detects → build → alert on failure / deploy to test server → inform developers.
- **Advantages:** free, easy setup, customizable, cross-platform, cloud support. **Drawbacks:** outdated UI, needs technical knowledge, can be fragile.

### 3.12 Jenkins Pipeline Scripts

- A Jenkins script automates: get source, compile, test, package, deploy.
- **Script types:** *Declarative* (structured, readable, simple pipelines); *Scripted* (Groovy-based, flexible, complex logic).
- **Project types:** *Freestyle* (GUI, simple jobs); *Pipeline* (Groovy script, version-controlled, complex workflows).
- **Build pipeline steps:** (1) check `mvn -version`, `java -version`, `git --version`; configure tools in Manage Jenkins → Global Tool Configuration; (2) New Item → Pipeline; (3) paste script (e.g. Hello World template); (4) script has *agent* (where to run) and *stages* (build, test, deploy); (5) add more stages; Apply and Save; (6) Build Now; (7) watch stage view progress; (8) check logs of each stage for troubleshooting.

## UNIT 4 – Testing Strategies, Debugging, Docker, Kubernetes & Nagios

### 4.1 Introduction to Testing

- **Software testing:** quality control before release. Checks: works as expected? meets user needs? free of bugs?
- **Why important:** prevents failures in critical tasks (banking, shopping), ensures smooth running, protects data from security threats.
- **Testing vs Debugging:**

| Aspect | Testing | Debugging |
| --- | --- | --- |
| Who | Testers / QA | Developers |
| Focus | Finds problems | Fixes the cause |
| Question | Does it work? | Why not, and how to fix? |

### 4.2 Strategic Approach to Testing

- **Testing strategy:** systematic plan to test components, their integration and the whole system. **Goals:** find errors early, perform correctly in all conditions, meet functional and user requirements.
- **Levels (small → large):** Unit → Integration → System → Validation (shown as a spiral).
- **Black-box testing:** tests functionality (inputs/outputs) without seeing code; no programming knowledge; based on specs (calculator, add-to-cart).
- **White-box testing:** tests internal logic/paths (loops, conditions); needs programming knowledge (login logic, sorting algorithm).
- **Verification vs Validation:** Verification = "Are we building the product *right*?" (matches design/specs; code reviews). Validation = "Are we building the *right* product?" (meets user needs; functional/user testing).
- **Testing strategy for conventional software (10 steps):** understand requirements → test plan → design test cases → set up test environment → execute tests (functional, performance, security) → track and fix defects (retest) → user testing → document everything → summary report → improve process.

### 4.3 Unit Testing

- Tests individual units/components in isolation (testing each brick) – early error detection, cheaper fixes.
- **Driver:** small program that calls and controls the unit under test (replaces the *caller*, e.g. calls login function with sample inputs).
- **Stub:** placeholder for a missing *called* component, returns fake responses (fake payment gateway: "Payment Successful").
- Together they let components be tested before the rest is ready. **Benefits:** speeds up testing, early error detection, saves time.

### 4.4 Integration Testing

- Tests that combined modules work together after unit testing.
- **Top-down:** start with main module (M1), go downward; missing lower modules replaced by **stubs**.
- **Bottom-up:** start with lowest modules, go upward; missing higher modules replaced by **drivers**.

### 4.5 System Testing

- Tests the whole assembled system (like inspecting a finished car).
- **Types:** *Functional* (does what it should), *Performance* (heavy load, e.g. 1,000 users), *Security* (e.g. password encryption), *Compatibility* (devices and browsers).

### 4.6 Validation Testing

- Checks the software meets user needs in real-world conditions.
- **Alpha testing:** by developers in a controlled environment. **Beta testing:** by real users in their own environment, feedback collected.

### 4.7 The Art of Debugging

- Finding and fixing bugs by understanding the **root cause** without creating new ones.
- **Steps:** (1) identify/reproduce the problem → (2) locate the source → (3) analyze the cause → (4) fix → (5) test the fix.
- **Strategies:** *Brute force* (try all inputs/conditions); *Backtracking* (work backward from where the error shows); *Cause elimination* (isolate/disable parts); *Print-statement debugging* (print variable values); *Debugging tools* (debugger, breakpoints, logs).
- **Example:** calculator gives 10/2 = 0 → cause is integer division → use float division → test 10/2, 15/3, 7/2.

### 4.8 Containerization and Docker

- **Containerization:** packaging an app with all dependencies (code, libraries, settings) into one container that runs the same anywhere (like a lunchbox). Solves "works on my machine" problems.
- **Tools:** Docker (most popular), Kubernetes (orchestration), Podman (daemonless), LXC, OpenShift, containerd, rkt.
- **Jenkins vs Docker:** Jenkins automates build/test/deploy (CI/CD, reduces manual work); Docker packages apps into containers (removes compatibility issues).
- **Docker vs VM:** containers are small, fast to start, use fewer resources, share host OS (shared isolation); VMs are heavy, slower, each has its own full OS (full isolation).
- **Docker architecture:** *Daemon* (builds/runs/manages containers in the background); *Client* (commands like `docker run`); *Images* (templates); *Containers* (running images); *Registry* (image storage, e.g. Docker Hub).
- **Key components:** Docker Engine, Image, Container, Dockerfile, Docker Compose.
- **How Docker works:** write Dockerfile → `docker build` → `docker run`.
- **Dockerfile example:** `FROM python:3.9` (base image) → `WORKDIR /app` → `COPY . /app` → `RUN pip install -r requirements.txt` → `EXPOSE 5000` → `CMD ["python","app.py"]`.
- **Docker Compose:** manages multiple containers using `docker-compose.yml` (e.g. WordPress + MySQL); start all with `docker-compose up`.
- **Docker Hub:** online library of images; `docker pull ubuntu`; you can upload your own.

### 4.9 Orchestration and Kubernetes

- **Orchestration:** automating tasks so components work together in order (wedding planner).
- **Container orchestration:** starts/stops containers, scales up/down, enables communication, replaces failed containers.
- **Kubernetes (K8s):** open-source platform automating deployment, scaling and management of containers. **Features:** automatic deployment, scaling, self-healing, load balancing, rolling updates (no downtime).
- **Architecture:** *Master node* – API Server (receives requests), Scheduler (assigns work), Controller Manager (keeps desired state), etcd (cluster database). *Worker nodes* – Pods, Kubelet (ensures containers run), Kube-proxy (networking). *Pod* – smallest unit, holds one or more containers. *Controller* – keeps correct number of pods. *Service* – stable way to find pods.
- **Minikube:** local single-node Kubernetes cluster (inside a VM on your laptop) for practice; has Deployment (maintains pods) and Service (exposes app on a port).
- **Kubernetes vs Docker:** Docker builds/runs containers (manual scaling, limited fault handling); Kubernetes manages many containers (auto scaling, restarts failed, advanced load balancing).
- **Kubernetes vs Docker Swarm:** Kubernetes for large complex workloads with advanced features; Swarm is simpler, for small lightweight setups.
- **Deploy with Minikube:** `minikube start` → write YAML (apiVersion, kind: Pod, metadata name, spec with container name, image nginx, port 80) → `kubectl apply -f simple-app.yaml` → `kubectl get pods` → `kubectl delete pod my-app`.

### 4.10 Continuous Monitoring and Nagios

- **Continuous monitoring:** regularly checking software/systems: always watching, automatic checks, instant feedback, security checks, performance tracking, user insights, rule/compliance checking.
- **Why important:** catch problems early, adapt quickly to changes, improve over time.
- **Tool categories:** log management (ELK Stack); performance (New Relic); security (Splunk); infrastructure (Nagios); CI/CD (Jenkins); user monitoring (UserZoom); application monitoring (AppDynamics); container tools (Kubernetes).
- **Nagios:** monitors servers, networks, applications and sends alerts. **Types:** *Nagios Core* (free, plugins) and *Nagios XI* (paid, advanced, support).
- **Architecture:** Nagios Core (central server, brain) → Plugins (workers that check health, storage) → Web interface (dashboard). Core tells plugins what to check → plugins return data → Core decides → alerts via dashboard/email.
- **Install with Docker:** install Docker Desktop → `docker pull jasonrivers/nagios:latest` → `docker run -d --name nagiosdemo -p 8888:80 jasonrivers/nagios:latest` → open `http://localhost:8888/nagios` (user: nagiosadmin, password: nagios) → stop: `docker stop nagiosdemo`, remove: `docker rm nagiosdemo`.
- **Dashboard:** host status, service status, summary, performance data, notifications, event log, configuration options.
- **Why Nagios:** detects problems early, sends alerts, keeps systems efficient.

## UNIT 5 – Risk Management & AWS Cloud

### 5.1 Risk Management – Introduction

- Process of identifying, analyzing and mitigating potential problems that could affect a software project.
- **Steps:** identify risks → assess (likelihood and impact) → plan mitigation → monitor and control → communicate.

### 5.2 Reactive vs Proactive Strategies

- **Reactive:** deal with problems after they occur (firefighting), e.g. replace a team member who left.
- **Proactive:** anticipate and prevent/prepare beforehand (fire prevention), e.g. secure alternative technology. Usually a combination is used.

### 5.3 Software Risks

- **Project risk** – threatens plan (schedule, staffing, resources, requirements). **Technical risk** – threatens quality/timeline (can we build it?). **Business risk** – threatens viability: building a product no one wants, not fitting company strategy, salesforce can't sell it, losing management support, losing budget.
- **Known** (found by evaluating plans, e.g. unclear requirements); **Predictable** (from past projects, e.g. staff turnover); **Unpredictable** (very hard to foresee, e.g. payment service shuts down).
- **Risk characteristics:** probability, impact, time sensitivity, dependencies, mitigation difficulty, uncertainty.

### 5.4 Risk Identification

- Listing what could go wrong. **Generic risks:** common to all projects (poor communication, budget overruns, schedule delays, changing requirements). **Product-specific risks:** unique to the product (hardware integration, innovative features, compatibility, UI challenges).
- **Assessing overall project risks (9 steps):** list problems → group them → estimate likelihood and impact → focus on big ones → plan responses → consider how risks affect each other → talk to stakeholders → document and share → keep watching for changes.
- **Risk components:** internal parts that cause risk (technology complexity, resources, requirements). **Risk drivers:** external forces affecting them (market trends, laws, user acceptance).

### 5.5 Risk Projection (Estimation)

- Educated guess of **likelihood** + **impact** → **combined assessment**.
- **Risk table:** columns Risk ID, Description, Likelihood, Impact, Priority (H/M/L; can be colour-coded). Example: R1 critical module bug (H, H, High); R3 key member leaves (L, H, Medium).

### 5.6 Risk Refinement

- Taking a deeper look: find more detail, better likelihood/impact estimates, **break big risks into smaller pieces**, make step-by-step plans, keep information updated, work with the team.

### 5.7 RMMM (Risk Mitigation, Monitoring and Management)

- **Mitigation:** steps to prevent/reduce risk beforehand (realistic deadlines). **Monitoring:** watch for signs of risk (regular checks). **Management:** overall process – plan when risk happens.
- **RMMM plan components:** risk identification, risk analysis/assessment, mitigation, monitoring, contingency planning, documentation, communication and reporting, review and adaptation.
- **Risk information sheet:** one-page summary per risk with name, description, likelihood, impact, mitigation plan, monitoring approach, contingency plan. Example: "Bug Surge Risk" – likelihood High, impact Medium; mitigation: code reviews, testing, training; monitoring: weekly inspections, automated tests, bug tracking; contingency: dedicated fix team, extra debugging time.

### 5.8 Cloud Computing

- Delivery of computing (storage, processing, software) over the internet, on demand; pay for what you use. **Characteristics:** on-demand self-service, broad network access, resource pooling, rapid elasticity, measured service.
- **Features:** *Availability* (always accessible, like electricity); *Scalability* (adjust resources up/down); *Pay-as-you-go* (pay only for usage).
- **Cloud deployments:** *Public* (shared, provider-owned: Amazon, Microsoft, Google); *Private* (single organization); *Hybrid* (mix of public + private/on-premises working together).
- **Cloud services:** *IaaS* (rent virtual machines, storage, network); *PaaS* (platform to build and run apps, developers ignore infrastructure); *SaaS* (use ready software over the internet, nothing to install). Each level changes how much you vs the provider manage.

### 5.9 AWS Cloud and Services

- AWS lets you rent computing, storage, networking and more over the internet, pay only for use.
- **Key services:** EC2 (virtual servers); S3 (object storage); RDS (managed relational database); VPC (private network); CloudWatch (monitoring); Lambda (serverless code); CloudFront (CDN, faster delivery); IAM (access control); CloudFormation (infrastructure as code / blueprints); SageMaker (machine learning).
- **Steps to create infrastructure:** sign up (free tier) → log in to console → explore services → launch EC2 instance → create S3 bucket → create VPC → monitor with CloudWatch → create IAM user → (optional) deploy with Elastic Beanstalk → explore RDS/Lambda → check billing and set alerts → experiment.

### 5.10 Deploying a Static Web App with Docker and Nginx on AWS

- **Steps:** (1) push web app to GitHub; (2) create and connect to a VM (EC2); (3) clone repo, write Dockerfile; (4) build image; (5) run container and open via the VM's public IP.
- **GitHub:** `git init` → `git add` → `git commit` → create repo on GitHub → connect remote → `git push`.
- **Launch Ubuntu EC2:** log in → choose region (Asia Pacific – Mumbai) → EC2 → Launch Instance → name → pick free-tier Ubuntu AMI → 64-bit, 1 instance → `t2.micro` → create new key pair → network settings: security group (ports 0–65535, each port has a purpose) → storage 8 GB (root, like C: drive) → Launch. Connect with PowerShell / Git Bash / web console using the `ssh -i` command from the AWS console.
- **On the VM:** `apt-get update`, `apt-get install docker.io`, install nano → go to project folder → create Dockerfile → `docker build -t html-webapplication .` → `docker run -d -p 80:80 html-webapplication:latest` → access at the VM's public IP.
