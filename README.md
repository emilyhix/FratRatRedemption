[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10869008&assignment_repo_type=AssignmentRepo)
 
# Frat Rat Redemption
 
 > Authors: [Glider Mapalad](https://github.com/gmapa002), [Emily Hix](https://github.com/emilyhix), [Emily Clark](https://github.com/eclar022), [Sabaipon Phimmala](https://github.com/bphimmala)

## Project Description
**General Description:**

_You did it! You bore through all the hazing and made it into Χαζος, the fraternity that will let you live your dream college life! Frat life is just how you imagined it back in high school, things couldn't get any better!_

_However, a challenge is placed before you that you never expected! You are at your first party, but notice something strange. Your frat brothers are all doing it... and they say its fine, but how could this possibly be fine?! They are all manipulating people to date them! But you don't wanna do anything like that!!!_

_Do you have what it takes to fight evil?! Find out in Frat Rat Redemption, the "frat boy tries not to manipulate their significant other" RPG simulator game! Customize your character! Balance your dating morals with your frat reputation! Resist the temptation and try your very hardest NOT to manipulate your significant other! What kind of frat boy will you become? Find out in "FRAT RAT REDEMPTION!"_

Frat Rat Redemption is a terminal-based RPG in which the user plays as a newly initiated fraternity boy who is appalled at the common sight of romantic manipulation committed by his frat brothers during his first frat party. The goal of the game is to leave the frat house. The user must navigate through a top-down view of a frat house layout populated with interactable NPCs which are the attendees of the party. There are two stats that the user must balance: Morality and Reputation. You start with full morality and zero reputation. To gain reputation points, you must interact with NPCs which initiate a quick-time-event in which the user must spell out nice and morally just words. If you misspell these words, your morality goes down. You must gain and/or maintain the highest morality and reputation you can before you leave the frat house. Depending on your results as you leave the house, different endings will play and you get to see what happens to your character.

**Why it is important/interesting to us:**

This project is important for our group because we all enjoy a good laugh. This project is meant to have a comedic tone to it, a tone which we hope to produce in the gameplay. The environment and characters are based on the experiences we get from being on campus and interacting with its people during our daily lives. Making this game can alleviate the stress from interacting with the people on campus that make us just a tad-bit annoyed. By channeling our animosity into the creation of this game, we aim to create a more relatable in-game environment which students and faculty alike can also have a laugh at, helping to shed some light on the stresses of our academic lives through comedy, just like how the creation of the game did for our group. 

**Languages/Tools/Techonologies:**

Languages - primarily C++, possibly Inform

Tools - _story boards_ to help us organize our thoughts/ideas/aspects we want to consider for the RPG, _written/typed documents_ to keep track of storyline and major events

Technologies - possibly _Inform_ (software meant for creating text games), _Visiual Studio Code_ to write and test our code, _Github_ version control system to allow for collaborative program development and a project board to keep track of product backlog and task progress, _Git_, _CMake_ to compile C++ our code, _Google Test Framework_ tools to help test our code

**Program inputs/outputs:**

Inputs - The game will be controlled via keyboard inputs. First, the user will choose from different presets which reflect the type of frat boy their character will be. Examples include Nerdy, Athletic, Apathetic, and/or Leader. After choosing their character attributes, the user will be able to move around an ascii-based environment using the arrow keys. When interacting with an NPC, the user will be prompted to type words perfectly without making an error. This will be done seamlessly without the need to press “enter” after each prompt. 

Outputs - First, the user will be put on a character customization screen in which they can choose their attributes. The user will be presented with an ascii-based level in which they are able to use the keyboard to navigate. The level will be populated with NPCs with their own movement behaviors. When the user interacts with an NPC, an interaction screen will appear with the typing prompts for the user outputted in a text-box.

**Features:**

Live Character Inputs Without Waiting For “Enter” Press - The game will take keyboard inputs without waiting for the user to press “Enter.” That means that movement throughout the different character customization, ascii-based level, and dialogue screens will happen without needing the user to press “Enter” in between inputs

Character select/customization screen - Have user input name and choose the type of frat boy that they want. Different frat boy types have different attributes which gives the user different advantages/disadvantages in the game.

Ascii-based Level - The user will be able to navigate through an ascii level populated with moving NPCs and non-passable walls. 

NPC Interactions - When the user “bumps” into an NPC (which will each be represented by an ascii character), they will be transferred to an interaction screen. In this screen, the user must type words which have good moral connotations (there will be a large list of words which have nice connotations that we will randomly choose from). The user must type this word perfectly without making ANY spelling errors. If you do, your morality will go down. 

Morality/Reputation system - Morality starts at 10 and you lose one morality for every misspelled word that the user enters. Since there is live character input, the user will not be able to backspace, meaning that if one character strays from what is prompted, the interaction screen will be exited and the user will lose one morality. The user will try their hardest to keep morality above 0.  Reputation starts at 0 and it represents your character’s standing with the fraternity. You get reputation by interacting with NPCs (does not have to be a successful interaction with no spelling errors). 

Ending screen - there will be an exit door in the ascii-based level which the user can leave through at any time. Depending on your morality and reputation stats when you leave, there will be different endings which will be output based on developer-discussed ratios. 
 
 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs, expected output, and buttons (if applicable). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).

![PROJECT_UML_0 1 drawio](https://user-images.githubusercontent.com/130017121/236984562-91c396d2-bed7-437b-9d97-bdf430d75fa7.png)
Above is the UML class diagram for the FRAT RAT REDEMPTION program. The functionality of the program is largely based on time. That is because this program is heavily dependant on a top-down visual of the in-game environment in which the user can control a "character" which is able to move around and interact with the characters in the generated environment. To create the illusion of visible movement in this in-game environment, it is essential for time to be a primary feature. In main, we will create a game object and run the game member function, tickON(). This function starts a loop which will execute with a frequency of 5 ticks per second. This function will always run until the tickOFF() function is called. During each tick, the class will detect which key is being pressed and store it in the "keyPressed" integer. This will allow for seemless key inputs without requiring the user to press "enter" between each input. 

During the game's runtime, the user will be presented with different screens. There are four different screens which the user will be able to interact with in unique ways. When starting the game, the user will be presented with the "PLAYER_CUSTOMIZE" screen in which the user will enter their name and select a personType for their character. With this data, a PLAYER_CLIENT object will be created and used throughout the rest of the game. From this point, every tick, the screen will be redrawn in the terminal. The MAP screen will be an ascii-based representation of the in-game environment, populated with walls, NPCs and the player's in-game representation. The map will be drawn using a list of "COORD" objects. The result will be a grid of characters being displayed to the terminal. There will be two types of coord objects: Characters and obstacles. Characters will have their own animations and be able to move throughout the map. Obstacles are stationary and can be created in bulk. The obstacle class contains a length and width variable which developers can use to draw the borders of the in-game environment. Each coord will be printed on the grid with the char specified in the "charAtCoord" char. 

There will be two kinds of character coord objects: NPCs and the PLAYER_MARKER. NPC objects will have set movement paths which developers will be able to set uniquely for each NPC. During each tick, the NPC will move one step in its path. When the NPC has finished its path, it will simply follow the path again. The player coord will be controlled soley by the player. Using the seemless keyboard inputs, the user will be able to make the character move either up, down, left or right. As long as the user is holding the arrow key respective to the direction they want to move, then the player_marker will move one time per tick in that direction. The player_marker will detect for "Collisions" with other COORD objects each tick. A collision is if the player_marker enters the same coordinates as an NPC or obstacle object. If the user is about to collide with an obstacle, no movement will occur (this will emulate not being able to walk into walls in real life). When the player_marker collides with an NPC, the user will be transported to the INTERACTION screen and the game ticks will be paused through the tickOFF() function in the game class. 

The INTERACTION screen will appear when the PLAYER_MARKER collides with an NPC coord. This screen is simple and purely text based. The "dialog" string of each NPC object will be output. Then a string prompt for the user to type will be displayed. This screen will take keyboard inputs (seemlessly without requiring the user to press enter). If the user makes a typing error (inputs the wrong letter), then that will cause the PLAYER_CLIENT's reputation integer to go down by 1. If the prompt is typed perfectly, then the PLAYER_CLIENT's morality to increase by 1. Depending on if the user makes a mistake or not, the NPC will output a departing line of dialog. After a few seconds, the screen will transition back to the MAP screen and the user will be able to move again. The tickON() function will be called.  

On the MAP screen, there will be a door which the user can exit through. These doors will be indicated by a split in the "######" that mark the walls. Once the user exits through this door, the ending screen will be output. This will be a simple text based screen which takes the ratio of the user's morality and reputation and displays which ending the user gets. There will be multiple endings which will reflect a hyperbolic representation of the real world consequences of different behaviors at a frat party. The tickOFF() function will then be called and the game will be exited and deallocated with the gameOFF() function. 
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
