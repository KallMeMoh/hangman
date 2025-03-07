#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
#include <set>
#include <cstdlib>
#include <ctime>

const int WORD_COUNT = 1378;
const int MAX_HEALTH = 10;
const std::string words[WORD_COUNT] = {
  "ability", "absence", "academy", "account", "accuse", "achieve", "acquire", "address", "adjust", "admit", "advance", "advice", "affect", "afford", 
  "against", "agency", "aircraft", "allege", "allow", "almost", "already", "alter", "always", "amazing", "amount", "ancient", "anger", "animal", 
  "announce", "annual", "answer", "anxiety", "apology", "appeal", "appoint", "approve", "argue", "arrival", "article", "artist", "ashamed", "aspect", 
  "assault", "assert", "assign", "assist", "assume", "athlete", "attract", "auction", "autumn", "average", "avoid", "awake", "aware", "awesome", "awful", 
  "awkward", "bachelor", "backpack", "balance", "ballot", "banana", "banker", "banner", "barrier", "battery", "beauty", "believe", "benefit", "besides",
  "between", "beyond", "bicycle", "bitter", "blame", "blanket", "blessing", "blind", "blossom", "blueprint", "board", "bother", "boundary", "bracelet",
  "bravery", "bread", "breeze", "brick", "brief", "bright", "brilliant", "broadcast", "broken", "brother", "builder", "burden", "butter", "button",
  "buyer", "cabinet", "calculate", "calendar", "camera", "campaign", "canal", "cancel", "candy", "cannon", "canvas", "capable", "capital", "capture",
  "carbon", "careful", "cargo", "carpet", "carve", "casual", "cattle", "caught", "celebrate", "center", "ceremony", "chance", "change", "chaos",
  "chapter", "charge", "charity", "charm", "chase", "cheap", "cheese", "chemical", "chest", "chief", "choice", "choose", "chronic", "chunk", "circle",
  "citizen", "claim", "clarify", "classic", "clever", "click", "client", "climate", "clinic", "clock", "close", "cloth", "cloud", "clown", "clump",
  "cluster", "coach", "coast", "cocktail", "coffee", "collect", "color", "column", "combine", "comfort", "comic", "commit", "common", "company",
  "compare", "compete", "compile", "complain", "complete", "complex", "comply", "compose", "concept", "concern", "concert", "conduct", "confirm",
  "congress", "connect", "consider", "consume", "contact", "contain", "content", "contest", "context", "control", "convert", "copper", "coral",
  "corridor", "costume", "cottage", "cotton", "couch", "council", "counter", "country", "couple", "courage", "cover", "crack", "craft", "crash",
  "crawl", "crazy", "cream", "credit", "creek", "cricket", "crime", "crisp", "critic", "cross", "crowd", "crucial", "cruel", "crumble", "crunch",
  "crush", "crystal", "culture", "cupboard", "curious", "current", "curtain", "curve", "cushion", "custom", "cycle", "damage", "dance", "danger",
  "daughter", "daytime", "debate", "decade", "decide", "decline", "decorate", "decrease", "defense", "define", "delay", "deliver", "demand", "denial",
  "dentist", "depart", "depend", "deposit", "depth", "deputy", "derive", "describe", "desert", "design", "despair", "destroy", "detail", "detect",
  "develop", "device", "devote", "diagram", "diamond", "diary", "diesel", "differ", "digital", "dignity", "dilemma", "dinner", "dinosaur", "direct",
  "disagree", "discover", "disease", "disorder", "display", "distance", "divert", "divide", "divorce", "dizzy", "doctor", "document", "dolphin",
  "domain", "donate", "donkey", "donor", "double", "draft", "dragon", "drama", "drastic", "dream", "dress", "drift", "drill", "drink", "drive", "during",
  "dutch", "dwarf", "dynamic", "eager", "eagle", "early", "earth", "easily", "ecology", "economy", "educate", "effort", "eight", "either", "elbow",
  "elder", "electric", "elegant", "element", "elephant", "elevator", "elite", "embark", "embody", "embrace", "emerge", "emotion", "employ", "empty",
  "enable", "enact", "endless", "endorse", "enemy", "energy", "enforce", "engage", "engine", "enhance", "enjoy", "enlist", "enough", "enrich", "enroll",
  "ensure", "enter", "entire", "entry", "envelope", "episode", "equal", "equip", "erase", "erode", "erosion", "error", "escape", "essay", "essence", 
  "estate", "eternal", "ethics", "evoke", "exact", "example", "excess", "exchange", "excite", "exclude", "excuse", "execute", "exercise", "exhaust", 
  "exhibit", "exile", "exist", "exotic", "expand", "expect", "expire", "explain", "expose", "express", "extend", "extra", "eyebrow", "fabric", "faculty",
  "faint", "faith", "false", "family", "famous", "fancy", "fantasy", "fashion", "fatal", "father", "fatigue", "fault", "favorite", "feature", "february",
  "federal", "female", "fence", "festival", "fetch", "fever", "fiber", "fiction", "field", "figure", "filter", "final", "finger", "finish", "first",
  "fiscal", "fitness", "flame", "flash", "flavor", "flight", "float", "flock", "floor", "flower", "fluid", "flush", "focus", "follow", "force", "forest",
  "forget", "fortune", "forum", "forward", "fossil", "foster", "found", "fragile", "frame", "frequent", "fresh", "friend", "fringe", "front", "frost",
  "frown", "frozen", "fruit", "funny", "furnace", "future", "gadget", "gallery", "garage", "garbage", "garden", "garlic", "gather", "gauge", "general",
  "genius", "genre", "gentle", "genuine", "gesture", "ghost", "giant", "giggle", "ginger", "giraffe", "glance", "glare", "glass", "glide", "glimpse",
  "globe", "gloom", "glory", "glove", "goddess", "goose", "gorilla", "gospel", "gossip", "govern", "grace", "grain", "grant", "grape", "grass",
  "gravity", "great", "green", "grief", "grocery", "group", "grunt", "guard", "guess", "guide", "guilt", "guitar", "habit", "hammer", "hamster",
  "happy", "harbor", "harsh", "harvest", "hazard", "health", "heart", "heavy", "hedgehog", "height", "hello", "helmet", "hidden", "history", "hobby",
  "hockey", "holiday", "hollow", "honey", "horror", "horse", "hospital", "hotel", "hover", "human", "humble", "humor", "hundred", "hungry", "hurdle",
  "hurry", "husband", "hybrid", "identify", "ignore", "illegal", "illness", "image", "imitate", "immense", "immune", "impact", "impose", "improve",
  "impulse", "include", "income", "increase", "index", "indicate", "indoor", "industry", "infant", "inflict", "inform", "inhale", "inherit", "initial",
  "inject", "injury", "inmate", "inner", "innocent", "input", "inquiry", "insane", "insect", "inside", "inspire", "install", "intact", "interest",
  "invest", "invite", "involve", "island", "isolate", "issue", "ivory", "jacket", "jaguar", "jealous", "jeans", "jelly", "jewel", "journey", "judge",
  "juice", "jungle", "junior", "kangaroo", "ketchup", "kidney", "kingdom", "kitchen", "kitten", "knife", "knock", "label", "labor", "ladder", "language",
  "laptop", "large", "later", "latin", "laugh", "laundry", "lawsuit", "layer", "leader", "learn", "leave", "lecture", "legal", "legend", "leisure",
  "lemon", "length", "leopard", "lesson", "letter", "level", "liberty", "library", "license", "light", "limit", "liquid", "little", "lizard", "lobster",
  "local", "logic", "lonely", "lottery", "lounge", "loyal", "lucky", "luggage", "lumber", "lunar", "lunch", "luxury", "lyrics", "machine", "magic",
  "magnet", "major", "mammal", "manage", "mandate", "mango", "mansion", "manual", "maple", "marble", "march", "margin", "marine", "market", "marriage",
  "master", "match", "material", "matrix", "matter", "maximum", "meadow", "measure", "mechanic", "medal", "media", "melody", "member", "memory",
  "mention", "mercy", "merge", "merit", "merry", "message", "metal", "method", "middle", "midnight", "million", "mimic", "minimum", "minor", "minute",
  "miracle", "mirror", "misery", "mistake", "mixed", "mixture", "mobile", "model", "modify", "moment", "monitor", "monkey", "monster", "month", "moral",
  "morning", "mosquito", "mother", "motion", "motor", "mountain", "mouse", "movie", "muffin", "multiply", "muscle", "museum", "mushroom", "music",
  "mutual", "myself", "mystery", "naive", "napkin", "narrow", "nasty", "nation", "nature", "negative", "neglect", "neither", "nephew", "nerve",
  "network", "neutral", "never", "night", "noble", "noise", "nominee", "noodle", "normal", "north", "notable", "nothing", "notice", "novel", "nuclear",
  "number", "nurse", "object", "oblige", "obscure", "observe", "obtain", "obvious", "occur", "ocean", "october", "offer", "office", "often", "olive",
  "olympic", "onion", "online", "opera", "opinion", "oppose", "option", "orange", "orbit", "orchard", "order", "ordinary", "organ", "orient", "original",
  "orphan", "ostrich", "other", "outdoor", "outer", "output", "outside", "owner", "oxygen", "oyster", "ozone", "paddle", "palace", "panda", "panel",
  "panic", "panther", "paper", "parade", "parent", "parrot", "party", "patch", "patient", "patrol", "pattern", "pause", "payment", "peace", "peanut",
  "peasant", "pelican", "penalty", "pencil", "people", "pepper", "perfect", "permit", "person", "phone", "photo", "phrase", "physical", "piano",
  "picnic", "picture", "piece", "pigeon", "pilot", "pioneer", "pistol", "pitch", "pizza", "place", "planet", "plastic", "plate", "please", "pledge",
  "pluck", "plunge", "point", "polar", "police", "popular", "portion", "position", "possible", "potato", "pottery", "poverty", "powder", "power",
  "practice", "praise", "predict", "prefer", "prepare", "present", "pretty", "prevent", "price", "pride", "primary", "print", "priority", "prison"
  "private", "prize", "problem", "process", "produce", "profit", "program", "project", "promote", "proof", "property", "prosper", "protect", "proud",
  "provide", "public", "pudding", "pulse", "pumpkin", "punch", "pupil", "puppy", "purchase", "purity", "purpose", "purse", "puzzle", "pyramid",
  "quality", "quantum", "quarter", "question", "quick", "quote", "rabbit", "raccoon", "radar", "radio", "raise", "rally", "ranch", "random", "range",
  "rapid", "rather", "raven", "razor", "ready", "reason", "rebel", "rebuild", "recall", "receive", "recipe", "record", "recycle", "reduce", "reflect",
  "reform", "refuse", "region", "regret", "regular", "reject", "relax", "release", "relief", "remain", "remember", "remind", "remove", "render",
  "renew", "reopen", "repair", "repeat", "replace", "report", "require", "rescue", "resemble", "resist", "resource", "response", "result", "retire",
  "retreat", "return", "reunion", "reveal", "review", "reward", "rhythm", "ribbon", "ridge", "rifle", "right", "rigid", "ripple", "ritual", "rival",
  "river", "roast", "robot", "robust", "rocket", "romance", "rookie", "rotate", "rough", "round", "route", "royal", "rubber", "runway", "rural", 
  "saddle", "sadness", "salad", "salmon", "salon", "salute", "sample", "satisfy", "satoshi", "sauce", "sausage", "scale", "scare", "scatter", "scene",
  "scheme", "school", "science", "scissors", "scorpion", "scout", "scrap", "screen", "script", "scrub", "search", "season", "second", "secret", 
  "section", "security", "segment", "select", "seminar", "senior", "sense", "sentence", "series", "service", "session", "settle", "setup", "seven", 
  "shadow", "shaft", "shallow", "share", "shell", "sheriff", "shield", "shift", "shine", "shiver", "shock", "shoot", "short", "shoulder", "shove", 
  "shrimp", "shrug", "shuffle", "sibling", "siege", "sight", "silent", "silly", "silver", "similar", "simple", "since", "siren", "sister", "situate",
  "skate", "sketch", "skill", "skirt", "skull", "sleep", "slender", "slice", "slide", "slight", "slogan", "slush", "small", "smart", "smile", "smoke", 
  "smooth", "snack", "snake", "sniff", "soccer", "social", "solar", "soldier", "solid", "solution", "solve", "someone", "sorry", "sound", "source", 
  "south", "space", "spare", "spatial", "spawn", "speak", "special", "speed", "spell", "spend", "sphere", "spice", "spider", "spike", "spirit", "split", 
  "spoil", "sponsor", "spoon", "sport", "spray", "spread", "spring", "square", "squeeze", "squirrel", "stable", "stadium", "staff", "stage", "stairs", 
  "stamp", "stand", "start", "state", "steak", "steel", "stereo", "stick", "still", "sting", "stock", "stomach", "stone", "stool", "story", "stove", 
  "strategy", "street", "strike", "strong", "struggle", "student", "stuff", "stumble", "style", "subject", "submit", "subway", "success", "sudden", 
  "suffer", "sugar", "suggest", "summer", "sunny", "sunset", "super", "supply", "supreme", "surface", "surge", "surprise", "surround", "survey", 
  "suspect", "sustain", "swallow", "swamp", "swarm", "swear", "sweet", "swift", "swing", "switch", "sword", "symbol", "symptom", "syrup", "system", 
  "table", "tackle", "talent", "target", "taste", "tattoo", "teach", "tenant", "tennis", "thank", "theme", "theory", "there", "thing", "thought", 
  "three", "thrive", "throw", "thumb", "thunder", "ticket", "tiger", "timber", "tired", "tissue", "title", "toast", "tobacco", "today", "toddler", 
  "together", "toilet", "token", "tomato", "tomorrow", "tongue", "tonight", "tooth", "topic", "topple", "torch", "tornado", "tortoise", "total", 
  "tourist", "toward", "tower", "track", "trade", "traffic", "tragic", "train", "transfer", "trash", "travel", "treat", "trend", "trial", "tribe", 
  "trick", "trigger", "trophy", "trouble", "truck", "truly", "trumpet", "trust", "truth", "tuition", "tumble", "tunnel", "turkey", "turtle", "twelve", 
  "twenty", "twice", "twist", "typical", "umbrella", "unable", "unaware", "uncle", "uncover", "under", "unfair", "unfold", "unhappy", "uniform", 
  "unique", "universe", "unknown", "unlock", "until", "unusual", "unveil", "update", "upgrade", "uphold", "upper", "upset", "urban", "usage", "useful", 
  "useless", "usual", "utility", "vacant", "vacuum", "vague", "valid", "valley", "valve", "vanish", "vapor", "various", "vault", "vehicle", "velvet", 
  "vendor", "venture", "venue", "verify", "version", "vessel", "veteran", "viable", "vibrant", "vicious", "victory", "video", "village", "vintage", 
  "violin", "virtual", "virus", "visit", "visual", "vital", "vivid", "vocal", "voice", "volcano", "volume", "voyage", "wagon", "walnut", "warfare", 
  "warrior", "waste", "water", "wealth", "weapon", "weasel", "weather", "wedding", "weekend", "weird", "welcome", "whale", "wheat", "wheel", "where", 
  "whisper", "width", "window", "winner", "winter", "wisdom", "witness", "woman", "wonder", "world", "worry", "worth", "wreck", "wrestle", "wrist", 
  "write", "wrong", "yellow", "young", "youth", "zebra"
};

// functions
std::string updateProgress(const std::string& word, const char& letter, std::string& progress) {
  std::string visualRep = "";

  if (progress.empty()) {
    for (auto& c : word) {
      progress += "_";
    }
  }

  for (int i = 0; i < word.length(); i++) {
    if (word[i] == letter) {
      progress[i] = letter;
    }
    visualRep += (std::string(1, progress[i]) + " ");
  }

  return visualRep;
}


int main() {
  std::cout << "Welcome to Hangman!" << std::endl;
  std::cout << "I will pick a random word and your job is to guess that word by entring a letter" << std::endl;
  std::cout << "However you only got 10 tries before you get hanged- on the bright side..." << std::endl;
  std::cout << "guessing a wrong vowel (a, e, u, i, o) will not affect the number of tries you got" << std::endl;
  std::cout << "Now that you know how to play... How many rounds would you like to play?" << std::endl;
  int health = MAX_HEALTH, round = 1, rounds = 0;
  
  std::cin >> rounds;
  while (1 > rounds || rounds > 10) {
    std::cout << "Sorry you can only play from 1 to 10 rounds, try again:" << std::endl;
    std::cin >> rounds;
  }
  
  std::cout << "Perfect! let's start, shall we?" << std::endl;
  // game init:
  std::string input; // player's guess gets stored here
  std::set<char> usedChars; // guessed chars per round gets stored here
  std::vector<std::tuple<std::string, bool, std::string, int>> finalProgress = {}; // stats of all rounds gets stored here
  
  srand(time(0)); // seed the random number generator
  
  while (round <= rounds) {
    // reseting player's states && round re-init:
    health = MAX_HEALTH; // health reset
    input = ""; // guess reset
    usedChars.clear(); // used chars reset
    std::string progress = ""; // player's progress 
    int randomIndex = rand() % WORD_COUNT; // get a random number between 0 and 1377
    std::string randWord = words[randomIndex]; // get the word at the random index

    while (health > 0) {
      std::string visualRep = updateProgress(randWord, '_', progress);

      std::cout << "round: " << round << "/" << rounds << " | Health: " << health << "/" << MAX_HEALTH << " | start guessing!" << std::endl;
      std::cout << visualRep << std::endl;
      
      // is input string 1 char long?
      std::cin >> input;
      if (input.length() > 1) {
        std::cout << "only one letter at a time tough guy!" << std::endl;
        continue;
      }
      
      // was the letter used before?
      if (usedChars.find(input[0]) != usedChars.end()) { // yes
        std::cout << "you tried letter " << input << " before!" << std::endl;
        continue;
      } else { // no
        usedChars.insert(input[0]);
      }

      // was player's input included in the randomly generated word?
      if (randWord.find(input[0]) != std::string::npos) { // yes, char found
        std::string visualRep = updateProgress(randWord, input[0], progress);
        
        if (progress == randWord) { // won the round
          std::cout << "Congratulations! you guessed the word: " << randWord << std::endl;
          finalProgress.push_back(make_tuple(randWord, true, randWord, health));
          round++;
          break; // onto the next round
        }
      } else  { // no, incorrect guess
        std::cout << "Nope! (" << input[0] << ") was an incorrect guess." << std::endl;
        // was the input a vowel?
        std::string vowels = "aeiou";
        bool isNotVowel = vowels.find(input[0]) == std::string::npos;

        if (isNotVowel) 
          health--;
      }
    }

    // lose case
    if (health <= 0) {
      std::cout << "Sorry! you lost this round, the word was: " << randWord << std::endl;
      finalProgress.push_back(make_tuple(randWord, false, progress, health));
      round++;
    }
  }

  std::cout << "Alright! all " << rounds << " rounds are over, let's check how you did:" << std::endl;
  int counter = 1;
  for (auto& game : finalProgress) {
    std::string randomWord = std::get<0>(game);
    bool solved = std::get<1>(game);
    std::string playerGuess = std::get<2>(game);
    int playerHealth = std::get<3>(game);

    std::cout << "==================== round " << counter++ << " ==========" << (solved ? " solved ==" : "==========") << std::endl;
    std::cout << "= The word you had to guess: " << randomWord << std::endl;
    std::cout << "= What you guessed: " << playerGuess << std::endl;
    std::cout << "= Times you guessed wrong: " << (MAX_HEALTH - playerHealth) << std::endl;
  }
  
  std::cout << "=================================================" << std::endl;
  return 0;
}