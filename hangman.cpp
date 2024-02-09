#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
#include <set>
#include <cstdlib>
#include <ctime>

std::string words[1378] = {
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
std::tuple<std::string, std::string> doMagic(std::string word, char letter, std::string progress) {
  std::string visualRep = "", result = progress;

  if (result.length() <= 0) {
    for (auto &&i : word) {
      result += "_";
    }
  }

  for (int i = 0; i < word.length(); i++) {
    if (word[i] == letter) {
      result[i] = letter;
    }
    visualRep += (std::string(1, result[i]) + " ");
  }

  return make_tuple(visualRep, result);
}


int main() {
  std::cout << "Welcome to Hangman!" << std::endl;
  std::cout << "I will pick a random word and your job is to guess that word by entring a letter" << std::endl;
  std::cout << "However you only got 10 tries before you get hanged- on the bright side..." << std::endl;
  std::cout << "guessing a wrong vowel (a, e, u, i, o) will not affect the number of tries you got" << std::endl;
  std::cout << "Now that you know how to play... How many rounds would you like to play?" << std::endl;
  int health = 10, round = 1, rounds = 0;
  
  std::cin >> rounds;
  while (1 > rounds || rounds > 10) {
    std::cout << "Sorry you can only play from 1 to 10 rounds, try again:" << std::endl;
    std::cin >> rounds;
  }
  
  std::cout << "Perfect! let's start, shall we?" << std::endl;
  // game init:
  std::string input; // player's guess
  std::set<char> usedChars;
  std::vector<std::tuple<std::string, bool, std::string, int>> finalProgress = {};
  
  
  while (round <= rounds) {
    // reseting player's states && round re-init:
    health = 10; // health reset
    input = ""; // guess reset
    usedChars.clear(); // used chars reset
    std::string progress = ""; // player's progress 
    srand(time(0)); // seed the random number generator with the current time
    int randomIndex = rand() % 1378; // get a random number between 0 and 1377
    std::string randWord = words[randomIndex]; // get the word at the random index

    while (health > 0) {
      std::tuple<std::string, std::string> magic = doMagic(randWord, '_', progress);
      std::string visualRep = std::get<0>(magic);
      std::string result = std::get<1>(magic);
      progress = result;

      std::cout << "round: " << round << "/" << rounds << " | Health: " << health << "/10 | " << "start guessing!" << std::endl;
      std::cout << visualRep << std::endl;
      
      // is input a 1 char string?
      std::cin >> input;
      if (input.length() > 1) {
        std::cout << "only one letter at a time tough guy!" << std::endl;
        continue;
      }
      
      // was the letter used before?
      if (usedChars.find(input[0]) != usedChars.end()) { // If input is in the set
        std::cout << "you tried letter " << input << " before!" << std::endl;
        continue;
      } else {
        usedChars.insert(input[0]);
      }

      // is player's input correct (included in the randomly generated word)?
      if (randWord.find(input) != std::string::npos) {
        // char found
        std::tuple<std::string, std::string> magic = doMagic(randWord, input[0], progress);
        std::string visualRep = std::get<0>(magic);
        std::string result = std::get<1>(magic);
        
        if (result == randWord) { // won the round
          finalProgress.push_back(make_tuple(randWord, true, randWord, health));
          round++;
          break;
        }
        progress = result;
      } else  { // incorrect guess
        std::cout << "Nope! (" << input << ") was an incorrect guess." << std::endl;
        // was the input a vowel?
        std::string vowels = "aeiou";
        bool isVowel = vowels.find(input) != std::string::npos;

        if (!isVowel) {
          health--;
        }
      }
    }

    // lose case
    if (health <= 0) {
      finalProgress.push_back(make_tuple(randWord, false, progress, health));
      round++;
    }
  }

  if (round > rounds) {
    std::cout << "Alright! all " << rounds << " rounds are over, let's check how you did:" << std::endl;
    int counter = 1;
    for (auto& t : finalProgress) {
      std::string randomWord = std::get<0>(t);
      bool solved = std::get<1>(t);
      std::string playerGuess = std::get<2>(t);
      int playerHealth = std::get<3>(t);

      std::cout << "==================== round " << counter++ << " ==========" << (solved ? " solved " : "========") << "==" << std::endl;
      std::cout << "= The word you had to guess: " << randomWord << std::endl;
      std::cout << "= What you guessed: " << playerGuess << std::endl;
      std::cout << "= Times you guessed wrong: " << (10 - playerHealth) << std::endl;
    }
  }
  
  std::cout << "=================================================" << std::endl;
  return 0;
}