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

Languages - C++

Tools - _story boards_ to help us organize our thoughts/ideas/aspects we want to consider for the RPG, _written/typed documents_ to keep track of storyline and major events, discord to communicate with each other when we cannot see each other in person

Technologies - _Visiual Studio Code_ to write and test our code, _Github_ version control system to allow for collaborative program development and a project board to keep track of product backlog and task progress, _Git_, _CMake_ to compile C++ our code, _Google Test Framework_ tools to help test our code

**Program inputs/outputs:**

Inputs - The game will be controlled via keyboard inputs. First, the user will choose from different presets which reflect the type of person their character will be. The choices include Popular, Normie, and Outcast. After choosing their character attributes, the user will be able to move around an ascii-based environment using the arrow keys. When interacting with an NPC, the user will be prompted to select responses to dialogue that the NPCs output. This will be done seamlessly without the need to press “enter” after each prompt. 

Outputs - First, the user will be put on a character customization screen in which they can choose their attributes. The user will be presented with an ascii-based level in which they are able to use the keyboard to navigate. The level will be populated with NPCs in their respective positions. When the user interacts with an NPC, an interaction portion of the screen will appear with the conversation prompts for the user.

**Features:**

Live Character Inputs Without Waiting For “Enter” Press - The game will take keyboard inputs without waiting for the user to press “Enter.” That means that movement throughout the different character customization, ascii-based level, and dialogue screens will happen without needing the user to press “Enter” in between inputs

Character select/customization screen - Have user input name and choose the type of party goer that they want. Different person types have different attributes which gives the user different advantages/disadvantages in the game.

Ascii-based Level - The user will be able to navigate through an ascii level populated with NPCs and non-passable walls. 

NPC Interactions - When the user “bumps” into an NPC (which will each be represented by an ascii character), the interaction portion of the screen will be accessible and the map will "gray out" and cannot be modified here. In this part of the screen, the user will be prompted with a description and dialogue from the NPC. The user will then be prompted with four different responses that they must choose from, for a set amount of lines per NPC interaction. Each response will affect the player's reputation and/or morality with the NPCs and their overarching group. 

Morality/Reputation system - Morality starts at a middle point and you lose one morality for every "negatively" influenced response you give. The user will try their hardest to keep morality above 0; if the score reaches 0, the ending of the game will drastically change.  Reputation starts at 0 and it represents your character’s standing with the different groups of people at the frat party. You get reputation by interacting "positively" with NPCs (dependent on what type of person the NPC is). Reputation will be updated with every response that is chosen, whereas there will be specific interactions with certain NPCs that will affect morality.

Ending screen - there will be an exit door in the ascii-based level which the user can leave through at any time. Depending on your morality and reputation stats when you leave, there will be different endings which will be output based on developer-discussed ratios, as well as the player's stats!
 
## User Interface Specification

### Navigation Diagram
<img width="955" alt="nav1" src="https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/114962480/3fc499cf-553f-4cf2-aed1-55b81c29e74a">

This diagram is a state machine of the different screens that the user will be able to see in this program. There are only 4 states. The text next to each arrow represents the condition required to transition to that screen. 


### Screen Layouts
![player cust screen](https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/129914502/ef04aafa-058f-4b39-87ad-827d14ddae23)
This is the first screen the player will go through.

![in game screen layout](https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/129914502/0ae4ca34-816e-43fc-9703-9fd74ca931e0)
As stated, this is the general screen that will be shown! Other modes of this screen are shown below under the Screenshots section.

## Class Diagram
![cs100 uml diagram](https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/129914502/cdf32f99-a58b-4ae4-bd67-5f307d8c387c)


Above is the UML class diagram for the FRAT RAT REDEMPTION program. The functionality of the program is largely based on time. That is because this program is heavily dependent on a top-down visual of the in-game environment in which the user can control a "character" which is able to move around and interact with the characters in the generated environment. To create the illusion of visible movement in this in-game environment, it is essential for time to be a primary feature.In gameManager, we will create a gameClock object and use its member functions in a while loop to have the game infinitely repeat until exited (timerISR and timerOn).  This function starts a loop which will execute with a frequency of 10 ticks per second. This function will always run until the timerOff() function is called. During each tick, the class will detect which key is being pressed and store it in the "keyboardInput" char. This will allow for seamless key inputs without requiring the user to press "enter" between each input.

During the game's runtime, the user will be presented witha  few different screens. When starting the game, the user will be presented with the "Player Customization" screeen in which the user will enter their name and selected a playerType for their character. With this data, a playerManager object will take in this infor and will use it throughout the rest of the game. At the end of this screen, a trigger/content warning is given and the player is asked if they're ready to play. If they say "yes" then the game proceeds, but if they say "no", then the game/program ends with a message to the user. After customizing themselves, the player will be brought to a title screen with the game title! The player must press a key to proceed to the main game screen. From this point, for every tick, the screen will be redrawn in the terminal to show the player moving. The main game screen consists of a map and a stats bar. The map portion will be an ascii-based representation of the in-game environment, populated with walls, furniture, NPCs, and the player's in-game representation. The map will be drawn using a list of "coord" objects. The result will be a grid of characters and the house being displayed to the terminal. Coord objects will represent both obstacles (walls, furniture, etc) and NPCs in the world. Characters will all be denoted by "X", but have their own unique color. Obstacles are stationary and can be created in bulk by reading a text file containing a 100x23 grid of charcters which will simply be assigned to a 2D array of coord objects, each holding their respective char. Each coord will be printed on the grid with a char specified in the "chracter" char.

There will be a PlayerManager class which contains the name, type, and stats of the player. The player will be represented with an "@" symbol.  Rather than the player being a PlayerManager object though, the PlayerActor class will contain the x and y position, and the coord class will assign the symbol to the player. 

When the player walks over an NPC, that is when the interaction portion of the screen will show up. As stated previously, the map and stats outline will become gray to show that you cannot move on the map during this state. The actual dialogue will be printed below the map and will cycle through the predetermined NPC conversation. This part is purely text based. An introduction/description of the NPC will be outputted before the actual interaction will begin. The first part  of the "dialogue" string array, of the respective NPC object, will be output. Then four responses that the player can choose from will be outputted. The screen will take in the keyboard inputs 'W' and 'S' to cycle through the respons choices. The player can confirm their choice with the 'enter/return' key. This will repeat for 4 times total before the NPC gives their final remark and the interaction ends. Each response the player chooses will affect their reputation. Only a few (nondisclosed) interactions will affect morality. These effects are all dependent on the playerType and the npcType. As these stats get changed, the stats bar to the right of the map will be updated, going up as more points are gained and down if points are lost. After the interaction is over, the terminal will clear the conversation and the map will become the default color (white on dark mode and black on light mode). The player can now move around the map again. If the player were to walk over an NPC they already interacted with, nothing would happen and the player can move on to their next task.

At the end of the game, whether that be if the player presses 'esc' to end the game or they decide to leave the party (through a labelled door), an ending will be outputted where the conversations were printed. There are 11 possible endings! The player's stats will also be given at the very end before the program ends.

### Updated Class Diagram Notes

We reworked the relationships that most classes had with each other, removed some classes that we did not end up implementing, and created new classes for responsibilities that were crowding other classes.

The game class was completely restructured and renamed “gameManager.” Rather than the class handling the clock, keyboard inputs, and printing all at once, the class now creates objects of classes which each individually and independently handle those responsibilities (these new classes are listed below). In doing this, the purpose of the gameManager, which can exist independently of all other classes, is to simply run the game by calling object member functions, thus appealing to the Single Responsibility Principle. We changed the relationships between gameManager and the other classes from aggregation to implementation because all the class functions and data members we used from other classes were called in the main() function.

The responsibilities stated above were moved to different classes are implemented by "gameManager". These classes are gameClock, userInput, mapManager, playerManager, textManager, TitlePrint, playerActor, playerCustom, EndingManager, StartManager, npc, and coord. This separation also follows the Single Responsibility Principle.

We removed the interaction class and integrated the interactions into main() with loops and flags. We also removed TextManager and textPrinter, mainly based off our own judgement. MapPrinter was also taken out and mapManager handles those responsibilities since they're all related to the map; this still abides by the SRP. 

A StatManager and EndingManager were implemented. They both do many calculations based of user responses during the interactions. The statManager and EndingManager (and other classes, this is just a simple example), communicate to each other through the gameManager within main(). All the classes were also written and are being developed to abide by the Open-Closed Principle. We can now add to the classes without having to modify what has already been written. This saves us a lot of time in the future when we'll most likely have to implement/develop more.

The previous class diagram had the NPC class be inherited from a characters class that had an abstract class with a pure virtual function move(). We realized that the NPCs in the game will not be using the move() function so we changed the relation between the NPC class and the rest of the game from an inheritance to a simple association. We did this to abide by the Interface Segregation Principle. This helped us remove unnecessary functions that we are not going to use.

We also changed the interaction, ending, and player customizer classes into stand alone entities that will implement the information from the manager classes, gameClock, and userInput. This was done so that we would abide by the Dependency Inversion Principle. This will allow us to use the entities wherever and whenever we deem fit.

Lastly, characterCustom was renamed "playerCustom" to better fit what the class actually does, since the user cannot design every single character, just themselves.


 
 ## Screenshots
 
| ![customizationScreen](https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/114962480/93b1c28f-d270-4c10-bf5c-755fe91aa4ef) | 
|:--:| 
| The player must choose what type of person they want to be - this choice affects the result of dialogue options with non-player characters. |

| ![mainMap](https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/114962480/101239f6-fd9f-44ac-ad05-c9da0491e56b) | 
|:--:| 
| The player is free to explore the map with live character input using WASD. |

| ![dialogueScreen](https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/114962480/9fa85544-129a-4ab9-b48c-470cbef84326) | 
|:--:| 
| Converse with 10 distinct non-player characters with unique personalities. |

| ![endingScreen](https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022/assets/114962480/fe41f64a-33c8-4b52-9221-abebf445e2dd) | 
|:--:| 
| The ending of the game is determined by the player's morality and reputation attributes, which are affected by choice of player type and conversations with npc partygoers. |

 ## Installation/Usage
 **To play Frat Rat Redemption:**
 1. Clone the repository using `git clone https://github.com/cs100/final-project-ehix001-sphim001-gmapa002-eclar022.git`
 2. Run `cmake .` and `make` for this repository
 3. Run the `./run` executable
 4. Follow the in-game instructions and have fun!
 
 ## Testing

Our project was tested using the Googletest framework. For each class implemented into the project, a separate test file was created and unit tests were developed to test all non-I/O code. The executable ./runAllTests was added to CMakeLists.txt to run every test at once.
