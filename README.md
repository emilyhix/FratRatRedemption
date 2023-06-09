[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10869008&assignment_repo_type=AssignmentRepo)
 
# Frat Rat Redemption
 
 > Authors: [Glider Mapalad](https://github.com/gmapa002), [Emily Hix](https://github.com/emilyhix), [Emily Clark](https://github.com/emii331), [Sabaipon Phimmala](https://github.com/bphimmala)

## Project Description
**General Description:**

_You did it! You bore through the first week of school and made it to the most popular fraternity, Χαζος (/xazós/), 's first rager of the year! College life is just how you imagined it back in high school, things couldn't get any better!_

_However, a challenge is placed before you that you never expected! You are at your first party, but notice something strange. People are awfully cliquey!!! You thought everyone left that behind in high school, alas, there are completely different groups of people that barely overlap. Only you can decide who you really belong with._

_Are you going to fit in?! Or will everyone shun you forever?! Find out in Frat Rat Redemption, the "try to desperately fit in with everyone" RPG simulator game! Customize your character! Balance your personal morals with your reputation! Resist the temptation and try your very hardest NOT to be a total prick to everyone around you! What kind of college student will you become? Find out in "FRAT RAT REDEMPTION!"_

Frat Rat Redemption is a terminal-based RPG in which the user plays as a party goer who tries to navigate their way through  their first college party. The goal of the game is to leave the frat house. The user must navigate through a top-down view of a frat house layout populated with interactable NPCs which are the attendees of the party. There are two stats that the user must balance: Morality and Reputation. You start with mid-leveled morality and zero reputation. To gain reputation points, you must interact with NPCs which initiate a quick-time-event in which the user chooses responses based on the dialogue the NPC says. Depending on the interaction, the reputation and/or morality will be affected. You must gain and/or maintain the highest morality and reputation you can before you leave the frat house. Depending on your results as you leave the house, different endings will play and you get to see what happens to your character.

**Why it is important/interesting to us:**

This project is important for our group because we all enjoy a good laugh. This project is meant to have a comedic tone to it, a tone which we hope to produce in the gameplay. The environment and characters are based on the experiences we get from being on campus and interacting with its people during our daily lives. Making this game can alleviate the stress from interacting with the people on campus that make us just a tad-bit annoyed. By channeling our animosity into the creation of this game, we aim to create a more relatable in-game environment which students and faculty alike can also have a laugh at, helping to shed some light on the stresses of our academic lives through comedy, just like how the creation of the game did for our group. 

**Languages/Tools/Techonologies:**

Languages - primarily C++

Tools - _story boards_ to help us organize our thoughts/ideas/aspects we want to consider for the RPG, _written/typed documents_ to keep track of storyline and major events

Technologies - _Visiual Studio Code_ to write and test our code, _Github_ version control system to allow for collaborative program development and a project board to keep track of product backlog and task progress, _Git_, _CMake_ to compile C++ our code, _Google Test Framework_ tools to help test our code

**Program inputs/outputs:**

Inputs - The game will be controlled via keyboard inputs. First, the user will choose from different presets which reflect the type of person their character will be. The choices include Popular, Normie, and Outcast. After choosing their character attributes, the user will be able to move around an ascii-based environment using the arrow keys. When interacting with an NPC, the user will be prompted to select responses to dialogue that the NPCs output. This will be done seamlessly without the need to press “enter” after each prompt. 

Outputs - First, the user will be put on a character customization screen in which they can choose their attributes. The user will be presented with an ascii-based level in which they are able to use the keyboard to navigate. The level will be populated with NPCs in their respective positions. When the user interacts with an NPC, an interaction portion of the screen will appear with the conversation prompts for the user.

**Features:**

Live Character Inputs Without Waiting For “Enter” Press - The game will take keyboard inputs without waiting for the user to press “Enter.” That means that movement throughout the different character customization, ascii-based level, and dialogue screens will happen without needing the user to press “Enter” in between inputs

Character select/customization screen - Have user input name and choose the type of frat boy that they want. Different frat boy types have different attributes which gives the user different advantages/disadvantages in the game.

Ascii-based Level - The user will be able to navigate through an ascii level populated with NPCs and non-passable walls. 

NPC Interactions - When the user “bumps” into an NPC (which will each be represented by an ascii character), the interaction portion of the screen will be accessible. In this part of the screen, the user will be prompted with a description and dialogue from the NPC. The user will then be prompted with four different responses that they must choose from, for a set amount of lines per NPC interaction. Each response will affect the player's reputation and/or morality with the NPCs and their overarching group. 

Morality/Reputation system - Morality starts at a middle point and you lose one morality for every "negatively" influenced response you give. The user will try their hardest to keep morality above 0; if the score reaches 0, the ending of the game will drastically change.  Reputation starts at 0 and it represents your character’s standing with the different groups of people at the frat party. You get reputation by interacting "positively" with NPCs (dependent on what type of person the NPC is). Reputation will be updated with every response that is chosen, whereas there will be specific interactions with certain NPCs that will affect morality.

Ending screen - there will be an exit door in the ascii-based level which the user can leave through at any time. Depending on your morality and reputation stats when you leave, there will be different endings which will be output based on developer-discussed ratios. 
 
## User Interface Specification

### Navigation Diagram
<img width="955" alt="nav1" src="https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/114962480/3fc499cf-553f-4cf2-aed1-55b81c29e74a">

This diagram is a state machine of the different screens that the user will be able to see in this program. There are only 4 states. The text next to each arrow represents the condition required to transition to that screen. 


### Screen Layouts

<img width="400" alt="screen1" src="https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/130163307/a4d014a2-adc1-4aec-8b5c-49905c034c1c"> <img width="400" alt="screen2" src="https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/130163307/29b968f9-38f4-4339-962b-adfda7c540a5">
 
<img width="400" alt="screen3" src="https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/130163307/fe0fd9f2-c77c-4bb0-a707-cfeda5a51bfe"> <img width="400" alt="screen4" src="https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/130163307/68557473-b95f-4028-b67c-94d3020a054c">

These are the different sections that will be present on the screen when being played. The map and the interaction portions will pivot to an "inactive" state while the other is active so as not to mess with the input of either. This is because WASD is being used for movement.

## Class Diagram
![cs100 uml diagram](https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/129914502/cdf32f99-a58b-4ae4-bd67-5f307d8c387c)


Above is the UML class diagram for the FRAT RAT REDEMPTION program. The functionality of the program is largely based on time. That is because this program is heavily dependent on a top-down visual of the in-game environment in which the user can control a "character" which is able to move around and interact with the characters in the generated environment. To create the illusion of visible movement in this in-game environment, it is essential for time to be a primary feature.In gameManager, we will create a gameClock object and use its member functions in a while loop to have the game infinitely repeat until exited (timerISR and timerOn).  This function starts a loop which will execute with a frequency of 10 ticks per second. This function will always run until the timerOff() function is called. During each tick, the class will detect which key is being pressed and store it in the "keyboardInput" char. This will allow for seamless key inputs without requiring the user to press "enter" between each input.

During the game's runtime, the user will be presented with a few different screens, each divided into its own section and shown at the same time. When starting the game, the user will be presented with the "Character Customization" screen in which the user will enter their name and select a personType for their character. With this data, a playerManager object will be created and used throughout the rest of the game. From this point, every tick, the screen will be redrawn in the terminal. There will be one screen that showcases the many different aspects of the game: the map, the stat bars, and the interaction between NPCs. The MAP portion will be an ascii-based representation of the in-game environment, populated with walls, NPCs and the player's in-game representation. The map will be drawn using a list of "COORD" objects. The result will be a grid of characters being displayed to the terminal. Coord objects will represent both obstacles and characters (NPCs) in the world. Characters will have their own symbol and remain in their respective location. Obstacles are stationary and can be created in bulk by reading a text file containing a 100 by 23 grid of characters which will simply be assigned to a 2d array of coord objects, each holding their respective char. Each coord will be printed on the grid with the char specified in the "character" char.

There will be a playerManager class which contain the location, name, and stats of the player. The player will be represented with a “@” symbol. Rather than the player being its own coord object, the playerManager will have an x and y coordinate, and the corresponding coord object in the 2d array will contain the @ symbol, or the player marker. Using the seamless keyboard inputs (WASD), the user will be able to make the character move either up, down, left or right. As long as the user is holding the key respective to the direction they want to move, then the player marker will move one time per number of ticks in that direction. The player marker will detect for "Collisions" with other COORD objects each tick. A collision is if the player marker enters the same coordinates as an NPC or obstacle object. If the user is about to collide with an obstacle, no movement will occur (this will emulate not being able to walk into walls in real life). When the player_marker collides with an NPC, the map portion of the screen will pause, while the INTERACTION portion becomes active. When this happens, the game ticks will be paused through the timerOff() function in the gameManager’s gameClock object. 

The INTERACTION portion will activate when the PLAYER MARKER collides with an coord that is marked to be an NPC (this will be controlled by the NPC class). This part is simple and purely text based. A description of the character will be outputted before the actual interaction will be. The first part of the "dialogue" string array, of the respective NPC object, will be output. Then four responses that the player can choose from will be outputted. This screen will take keyboard inputs (seamlessly without requiring the user to press enter). The player will have a short, set amount of time to respond to the NPC. If the user picks a response that is not to the liking of the NPC, then their reputation for the NPC's social group will go down. On the other hand, if the user picks a positive response, the reputation with that social group will go up. The user's personType that they chose in the "PLAYER_CUSTOMIZE" screen will affect how much reputation is gained or lost. There are a few number of interactions that will affect the morality stat, so players must be careful of those. The response gain/loss system is generally the same as the reputation one. This repeats four times before the NPC says farewell and the interaction ends. After a few seconds, the interaction portion will clear and deactivate. Then the map part will reactivate and the user will be able to move again. The timerON() function will be called.

On the MAP, there will be a door which the user can exit through. These doors will be indicated by a split in the lines that mark the walls and with the label "leave". Once the user exits through this door, the ending screen will be output. This will be a simple text based screen which takes the ratio of the user's morality and reputation and displays which ending the user gets. There will be multiple endings which will reflect a hyperbolic representation of the real world consequences of different behaviors at a frat party. The timerOFF() function will then be called and the game will be exited and deallocated by exiting the game loop. 

### Updated Class Diagram Notes

We reworked the whole class diagram to accommodate for the SOLID principles.

The game class was completely restructured and renamed “gameManager.” Rather than the class handling the clock, keyboard inputs, and printing all at once, the class now creates objects of classes which each individually and independently handle those responsibilities (these new classes are listed below). In doing this, the purpose of the gameManager, which can exist independently of all other classes, is to simply run the game by calling object member functions, thus appealing to the Single Responsibility Principle. 

The responsibilities stated above were moved to different classes that have an aggregation relationship to "gameManager". These classes are gameClock, userInput, mapManager, playerManager, and textManager. This separation also follows the Single Responsibility Principle. The separation was necessary because it allows all of us to work on more of the project simultaneously, rather than having to wait on eachother and/or have people work on the same class at once (which could potentially cause major issues regarding time and overwriting code). Additionally, the game can now be pieced together like bricks to form a complete product.
All the classes we named previously were also written and are being developed to abide by the Open-Closed Principle. We can now add to the classes without having to modify what has already been written. This saves us a lot of time in the future when we'll most likely have to implement/develop more.

The previous class diagram had the NPC class be inherited from a characters class that had an abstract class with a pure virtual function move(). We realized that the NPCs in the game will not be using the move() function so we changed the relation between the NPC class and the rest of the game from an inheritance to a simple association. We did this to abide by the Interface Segregation Principle. This helped us remove unnecessary functions that we are not going to use.

We also changed the interaction, ending, and player customizer classes into stand alone entities that will implement the information from the manager classes, gameClock, and userInput. This was done so that we would abide by the Dependency Inversion Principle. This will allow us to use the entities wherever and whenever we deem fit.
 

 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 **To play Frat Rat Redemption:**
 1. Clone the repository using `git clone https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022.git`
 2. Run `cmake .` and `make` for this repository
 3. Run the `./run` executable
 4. Follow the in-game instructions and have fun!
 
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.

Our project was tested using the Googletest framework. For each class implemented into the project, a separate test file was created and unit tests were developed to test all non-I/O code. The executable ./runAllTests was added to CMakeLists.txt to run every test at once.
 
