#include "../header/EndingManager.hpp"

EndingManager::EndingManager() {

}

EndingManager::EndingManager(const int& finalReputation, const int& finalMorality, const int& finalPopularRep, const int& finalNormieRep, const int& finalOutcastRep, string playerType) {

    this->finalReputation = finalReputation;
    this->finalMorality = finalMorality;

    // Assigns ending text based on player's final reputation and morality stats

    if (finalMorality <= 12) {
        playerResultText = "Oh... Oh my god. You’re a bottom of the barrel loser. How did you end up with such low\nmorality? Well, there’s no real loser to this simulator, but it really seems like you’re the first!\nQuite embarrassing honestly. Maybe you could go to a different party to change everyone’s\nminds... but I doubt anyone wants to see you. Maybe Marcus, who knows?";
    }
    else if ((finalPopularRep <= 0) && (finalNormieRep <= 0) && (finalOutcastRep <= 0)) {
        playerResultText = "Oh wow... You left the party and absolutely no one likes you, not even the incel! How did you\nend up doing that? Seems as though you’re a loner, kudos to you. Enjoy your free time since\nyou won’t be hanging out with anyone any time soon. Haha... Well, maybe you’ll make some\nmore friends next time. Good luck, champ.";
    }
    else if (finalPopularRep > finalNormieRep && finalPopularRep > finalOutcastRep) {
        if (playerType == "Popular") { 
            playerResultText = "You did it! You made it out of the party with a good reputation among the frat boys and sorority\ngirls! They seemed to already like you before the party, but they’re more certain that you\nbelong with them now. Who knows? Maybe you’ll even overthrow Bethany as the most\npopular person on campus.";
        }
        else if (playerType == "Normie") {
            playerResultText = "You’ve actually done it! You’ve enchanted the most popular people at college with your...\nseverely average personality? Nevertheless, you’ve done it! You’re quite full of surprises.\nHopefully, Bethany and Isaiah don’t feel too threatened by you. As long as you don’t step on\ntheir toes, you’re sure to fit in and be able to live with these people as your friends.";
        }
        else {
            playerResultText = "You’ve done the unthinkable! You walked into the frat house as an outcast, reject, a loser, and\nyou ended up hitting it off with all the people you’ve admired for so long! You’re one of them\nnow! Wait a minute... Did you lie to them or something..? What happened... Anyway, the\ngirlies invited you to get brunch with them tomorrow and the frat bros asked if you wanted to\nplay beach volleyball with them. Seems like fun! Though, all your old friends miss you already.";
        }
    }
    else if (finalNormieRep > finalOutcastRep) {
        if (playerType == "Popular") { 
            playerResultText = "You made it out of the party in one piece! Good job! But alas, it seems as if your reputation fell\nduring your time at the frat house. Some things you said to the jocks and mean girls were...\nDistasteful. At least you don’t have to climb too far up the social ladder if you plan on being\nconsidered “popular” again. Well, maybe at the next party you’ll be able to prove yourself to\nthe popular kids. As of now, you’re a normie: just kind of average, nothing really to you.";
        }
        else if (playerType == "Normie") {
            playerResultText = "So how does it feel to be terribly average? Not moving up or down on the social hierarchy?\nSimply staying right where you are. Must be kind of nice. Simplicity that is. You made it out of\nthe party in one piece and you ended up where you started: a normie. Not the worst thing that\ncould happen. It just seems like you’re comfortable where you are. Nothing wrong with that...";
        }
        else {
            playerResultText = "You managed to make people think you’re normal. How did you do that? Maybe you really are\nnormal... An interesting thought to say the least. Well, even though you seemingly made it up\na level in the social hierarchy, you’ve already been shunned by your old outcast friends,\nmaking the number of people that dislike you DOUBLE in one night! Ouch. Well, at least\nCloud and Denzel seem to be fond of you.";
        }
    }
    else {
        if (playerType == "Popular") { 
            playerResultText = "Ohh... You made it out of the party, but at what cost? It seems you’ve fallen far, far down the\nsocial hierarchy... Maybe this is actually where you belong. You finally let up on your facade\nof being a perfect and prestigious popular person and the outcasts welcome you with open\narms. Besides, they’re always open to befriending other rejects. The frat and sorority on the\nother hand... They hate you. How dare you betray them like that?";
        }
        else if (playerType == "Normie") {
            playerResultText = "You’ve fallen down the leaderboard. You’re one of the rejects now. They all seem generally\nfriendly, except for the obvious ones like Veronica. Nonetheless, she seems to actually like\nyou. But now the frat and sorority seem to have a strong disdain for you. Well, even stronger\nthan before. Bethany and Isaiah always glare at you around campus and laugh when they\npass you. At least you found your real friends though.";
        }
        else {
            playerResultText = "You knew who you were and where you belonged right off the bat. The outcasts are still your\nclosest friends and you guys have already made plans for tomorrow! You’re going to a concert\ntomorrow night and then dinner afterwards. Maybe you’ll even do some shenanigans before\nall this goes down.";
        }
    } 
}


void EndingManager::printEnding() {

    // Print player's end results to terminal
    cout << "You left the party!\n\n";

    cout << playerResultText << endl;

    cout << "\n";

    cout << "\n~ENDING STATS~\n" << endl;

    cout << "Reputation: " << finalReputation << "     Morality: " << finalMorality << endl;

}