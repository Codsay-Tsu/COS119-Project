> Use this worksheet to plan the next phase of your project **before you begin coding**
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**Project Name:**
→   Somnium Garden
  
**What does your program currently do? (1–3 sentences)**   
→It asks for players name and then creates their starting character. displays a main menu where player can display current garden and character stats as well as access the store to purchase seeds and also view their inventory.

---
## 🔍 Current Progress Check  
  
**What is working right now?**   
→   Inventory, shop, currency
  
**What is NOT working or incomplete?**   
→   leveling system, plots needed for gardening, more quality of life improvements
  
**What feels confusing or messy in your code?**   
→  Trying to juggle how im going to handle the leveling system between all the different classes

---
## 🚀 Feature Planning  
  
List the features you plan to add or improve this week.  
  
### Feature 1  
**Name:**   
→   Shop
  
**What does this feature do?**   
→   allows the user to purchase seeds and sell fully grown plants
  
**Why is this feature important?**   
→   its essential for the gameplay loop
  
---
### Feature 2  
**Name:**   
→   inventory
  
**What does this feature do?**   
→   allows the user to purchase items that will then be storedf in players inventory for later use when planting in the garden
  
**Why is this feature important?**   
→   also part of the core gameplay loop
  
---
  
### Feature 3 (optional)  
**Name:**   
→   tutorial menu option
  
**What does this feature do?**   
→   will give a brief explanation on what the program is made to do 
  
**Why is this feature important?**   
→   to make it a little easier to understand what im currently doing and what still needs to be worked on but mainly for players to have a better understanding for now
  
---
## 🧩 System Design Updates  
  
**Will you need to create any new classes? If so, which ones?**   
→  yes,  Item, Shop, Plot, Garden
  
**Will you modify any existing classes? How?**   
→   Yes, minor things like needing to go back and add in variables that will need to be implemented like exp in the future for Player, Shop and Garden.
  
**What data structures will you use (vectors, 2D vectors, etc.)?**   
→   Vectors, Strings, Integers.
  
---
## 🔄 Program Flow  
  
**Describe how a user interacts with your program:**  
  
1. Program starts →   It asks for your characters name
2. User chooses →   Shop
3. Program responds →   by opening the shop with current available items to purchase
4. Loop/next step →   Returns to main menu to await players next choice
  
---
## 🎯 Usability Improvements  
  
How will you make your program easier to use this week?  
  
- Clearer prompts:   
→   Im going to look more closely at how I have decisions typed out as well as putting in an optional tutorial menu option that i will work on for the remainder of the project
  
- Better error handling:   
→   changed my previous validation methods to a class so that i can call a method multiple times to catch error handling easier rather than typing it each time
  
- Improved menu/navigation:   
→   will make the menu a bit more readable
  
---
## ⚠️ Potential Challenges  
  
**What do you think will be the hardest part this week?**   
→   Getting the shop and item classes working the proper way
  
**What is your plan if you get stuck?**   
research more on the topics that I know I need for my program but still confuse me such as pointers and proper syntax.
---
  
## 📈 Level Up Goal  
  
**What skill are you focusing on improving this week?**   
→   pointers
  
**What will you do to improve it?**   
(e.g., tutorial, practice, debugging, office hours)   
→   work on a side project that does not effect my current program and break it so I can see why its broken. Will also see if i can get co pilot to send me some broken code to let me try to solve the puzzle
  
---
## 🗓️ Task Breakdown (GitHub Issues Planning)  
  
List the tasks you plan to create as GitHub Issues:  
  
- [ ]   create a brief tutorial
- [ ]   work on plot class
- [ ]   revisit user validation
- [ ]   begin writing out ideas for plant class
  
---
  
## 🔥 Final Check  
  
Before you start coding, ask yourself:  
  
- [ ] Do I know what I’m building this week?   
- [ ] Do I know where to start?   
- [ ] Did I break my work into small tasks?   
  
If yes → start coding 🚀   
If no → refine your plan first   
  
---
## 😈 Final Thought  
  
> Plan it now… or debug it later.