- ⚙️ Features added
- I added the plots, garden, plants and a way for them to all work together for the game loop.
    
- 🧱 Updates to your system design
    This will tie into a lot of what I did for refactoring but I currently have changed it so that instead of plots and viewing garden info being seperate Ive made it so when you view your garden info you can see your garden plots and what is currently planted there.
    
- 🧹 Refactoring improvements
    I've changed a lot of names of variables to something more fitting and more easily readable. I've also fixed my user input validation to finally include stoi instead of my previous versions. 
    
- 💭 What you changed and why
- For the plots and garden info it didn't make a lot of sense to me after completing them to be separated and in fact realized I made it harder on myself by doing so. My variable names needed to be something a bit more readable and easily understandable since I have a lot of them that sounded the same. Especially since I'm working with "Garden" "Garden Plots" "Plants" "plants levels"  things like that. I've made it easier for myself to understand exactly which variable is what. I didn't realize when starting this project just how large and tricky it actually would be to track everything.