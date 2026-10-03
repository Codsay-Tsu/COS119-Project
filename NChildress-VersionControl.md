course code COS119-O
Nicholas Childress
10/02/2026
# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

**[ Project and portfolio 1 ]**

- **[ Nicholas Childress ]**
- **[ 10/4/2026]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- [ clear ]: Clear the Screen
- [ cd ]: Print the "Working Directory"
- [ dir ]: List files and folders
- [ dir /a ]: List files and folders, including invisible files
- [ dir /a /q /s ]: List all files and folders, in human readable form
- [ cd foldername ]: Change directory
- [ cd \ ]: Change directory, go to root directory
- [ cd %USERPROFILE% ]: Change directory and go to user home directory
- [ cd .. ]: Change directory, go up one folder level
- [ cd ..\.. ]: Change directory, go up two folder levels
- [ cd %USERPROFILE%\Desktop ]: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

[ It changed the initial directory from just C:\Users\(Myname) to the directory of the folder i dragged into it after cd. I would type out the path but it is much longer ]

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

[ Local: copying files from one directory to another or saving a file with a new version number. ]
[ Centralized: A single server used to collaborate with other developers so that everyone can see what everyones been working on by being able to see the most recently worked on code ]
[ Distibuted: Making a copy of a repository and storing it on a local drive. not to much unlike us copying repositories for some classes]
**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- [ git clone ]: Clone a repository
- [ git config --global user.name ]: Set-up a global user name
- [ git config --global user.email ]: Set-up a global email address (to match my GitHub account email)
- [ git status ]: Shows the current state of your directory and staging area
- [ git add <filename ]: Add modified files to the next commit
- [ git commit -m ]: Make a commit with a new message
- [ git log ]: Show my commit history
- [ git help ]: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

[ Download git then configure git with your username and email then authenticate with GitHub using HTTPS with a personal access token ]

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  <br>
  [It tells Git which untracked files and directories to ignore.]

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  [It's a hidden macOS system file that stores a folders view settings. It should be ignored because it has nothing to do with version control and can just cause clutter.]

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
  [ anything system related or contains secrets so that those are not also shared during a clone ]

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

[ The cheat sheets supplied in each of the assignments on FSO, but also youtube was a prime resource when trying to break through my wall on trying to figure out what ive been doing wrong with my classes code. Co pilot was also a useful tool when I would get completly stumped, knowing what I wanted my code to accomplish but may have messed up on syntax. ]

**Terminal Commands**  
[Used the links provided in the assignment details for the cheat sheets]

**Three Types of Version Control**  
[Used FSOs provided documentation on version control]

**Git Commands**  
[Used the links provided to the cheat sheets in FSO]

**Connecting to GitHub using Terminal**  
[I had to use a combination of Google and Copilot to help me better understand this one]

**Using .gitignore and Why it's Important**  
[ Also a combination of Google, CoPilot and also just common sense thinking about the types of files that could be cloned to a repository ]
