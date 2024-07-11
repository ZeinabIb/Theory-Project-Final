#include <iostream>
#include <map>
#include <string>

using namespace std;

class Dictionary
{
public:
    map<string, string> AdjectiveDictionary;
    map<string, string> DeterminerDictionary;
    map<string, string> PronounDictionary;
    map<string, string> AdpositionDictionary;
    map<string, string> VerbDictionary;
    map<string, string> NounDictionary;
    bool isAdjective(string);
    bool isDeterminer(string);
    bool isPronoun(string);
    bool isVerb(string);
    bool isNoun(string);
    bool isAdposition(string);
    Dictionary()
    {
        AdjectiveDictionary["adorable"] = "Adjective";
        AdjectiveDictionary["adventurous"] = "Adjective";
        AdjectiveDictionary["aggressive"] = "Adjective";
        AdjectiveDictionary["agreeable"] = "Adjective";
        AdjectiveDictionary["alert"] = "Adjective";
        AdjectiveDictionary["alive"] = "Adjective";
        AdjectiveDictionary["amused"] = "Adjective";
        AdjectiveDictionary["angry"] = "Adjective";
        AdjectiveDictionary["bad"] = "Adjective";
        AdjectiveDictionary["beautiful"] = "Adjective";
        AdjectiveDictionary["better"] = "Adjective";
        AdjectiveDictionary["bewildered"] = "Adjective";
        AdjectiveDictionary["black"] = "Adjective";
        AdjectiveDictionary["bloody"] = "Adjective";
        AdjectiveDictionary["blue"] = "Adjective";
        AdjectiveDictionary["blue-eyed"] = "Adjective";
        AdjectiveDictionary["annoyed"] = "Adjective";
        AdjectiveDictionary["annoying"] = "Adjective";
        AdjectiveDictionary["anxious"] = "Adjective";
        AdjectiveDictionary["arrogant"] = "Adjective";
        AdjectiveDictionary["ashamed"] = "Adjective";
        AdjectiveDictionary["attractive"] = "Adjective";
        AdjectiveDictionary["average"] = "Adjective";
        AdjectiveDictionary["awful"] = "Adjective";
        AdjectiveDictionary["blushing"] = "Adjective";
        AdjectiveDictionary["bored"] = "Adjective";
        AdjectiveDictionary["brainy"] = "Adjective";
        AdjectiveDictionary["brave"] = "Adjective";
        AdjectiveDictionary["breakable"] = "Adjective";
        AdjectiveDictionary["bright"] = "Adjective";
        AdjectiveDictionary["busy"] = "Adjective";
        AdjectiveDictionary["buttery"] = "Adjective";
        AdjectiveDictionary["calm"] = "Adjective";
        AdjectiveDictionary["careful"] = "Adjective";
        AdjectiveDictionary["cautious"] = "Adjective";
        AdjectiveDictionary["stringming"] = "Adjective";
        AdjectiveDictionary["cheerful"] = "Adjective";
        AdjectiveDictionary["clean"] = "Adjective";
        AdjectiveDictionary["clear"] = "Adjective";
        AdjectiveDictionary["clever"] = "Adjective";
        AdjectiveDictionary["cloudy"] = "Adjective";
        AdjectiveDictionary["clumsy"] = "Adjective";
        AdjectiveDictionary["dangerous"] = "Adjective";
        AdjectiveDictionary["dark"] = "Adjective";
        AdjectiveDictionary["dead"] = "Adjective";
        AdjectiveDictionary["defeated"] = "Adjective";
        AdjectiveDictionary["defiant"] = "Adjective";
        AdjectiveDictionary["delightful"] = "Adjective";
        AdjectiveDictionary["depressed"] = "Adjective";
        AdjectiveDictionary["determined"] = "Adjective";
        AdjectiveDictionary["different"] = "Adjective";
        AdjectiveDictionary["colorful"] = "Adjective";
        AdjectiveDictionary["combative"] = "Adjective";
        AdjectiveDictionary["comfortable"] = "Adjective";
        AdjectiveDictionary["concerned"] = "Adjective";
        AdjectiveDictionary["condemned"] = "Adjective";
        AdjectiveDictionary["confused"] = "Adjective";
        AdjectiveDictionary["cooperative"] = "Adjective";
        AdjectiveDictionary["courageous"] = "Adjective";
        AdjectiveDictionary["curious"] = "Adjective";
        AdjectiveDictionary["cute"] = "Adjective";
        AdjectiveDictionary["difficult"] = "Adjective";
        AdjectiveDictionary["disgusted"] = "Adjective";
        AdjectiveDictionary["distinct"] = "Adjective";
        AdjectiveDictionary["disturbed"] = "Adjective";
        AdjectiveDictionary["dizzy"] = "Adjective";
        AdjectiveDictionary["doubtful"] = "Adjective";
        AdjectiveDictionary["drab"] = "Adjective";
        AdjectiveDictionary["dull"] = "Adjective";
        AdjectiveDictionary["dusty"] = "Adjective";
        AdjectiveDictionary["eager"] = "Adjective";
        AdjectiveDictionary["easy"] = "Adjective";
        AdjectiveDictionary["elated"] = "Adjective";
        AdjectiveDictionary["elegant"] = "Adjective";
        AdjectiveDictionary["embarrassed"] = "Adjective";
        AdjectiveDictionary["enchanting"] = "Adjective";
        AdjectiveDictionary["encouraging"] = "Adjective";
        AdjectiveDictionary["fair"] = "Adjective";
        AdjectiveDictionary["faithful"] = "Adjective";
        AdjectiveDictionary["famous"] = "Adjective";
        AdjectiveDictionary["fancy"] = "Adjective";
        AdjectiveDictionary["fantastic"] = "Adjective";
        AdjectiveDictionary["fierce"] = "Adjective";
        AdjectiveDictionary["filthy"] = "Adjective";
        AdjectiveDictionary["fine"] = "Adjective";
        AdjectiveDictionary["energetic"] = "Adjective";
        AdjectiveDictionary["enthusiastic"] = "Adjective";
        AdjectiveDictionary["envious"] = "Adjective";
        AdjectiveDictionary["evil"] = "Adjective";
        AdjectiveDictionary["excited"] = "Adjective";
        AdjectiveDictionary["expensive"] = "Adjective";
        AdjectiveDictionary["exuberant"] = "Adjective";
        AdjectiveDictionary["foolish"] = "Adjective";
        AdjectiveDictionary["fragile"] = "Adjective";
        AdjectiveDictionary["frail"] = "Adjective";
        AdjectiveDictionary["frantic"] = "Adjective";
        AdjectiveDictionary["friendly"] = "Adjective";
        AdjectiveDictionary["frightened"] = "Adjective";
        AdjectiveDictionary["funny"] = "Adjective";
        AdjectiveDictionary["furry"] = "Adjective";
        AdjectiveDictionary["gentle"] = "Adjective";
        AdjectiveDictionary["gifted"] = "Adjective";
        AdjectiveDictionary["glamorous"] = "Adjective";
        AdjectiveDictionary["gleaming"] = "Adjective";
        AdjectiveDictionary["glorious"] = "Adjective";
        AdjectiveDictionary["good"] = "Adjective";
        AdjectiveDictionary["handsome"] = "Adjective";
        AdjectiveDictionary["happy"] = "Adjective";
        AdjectiveDictionary["healthy"] = "Adjective";
        AdjectiveDictionary["helpful"] = "Adjective";
        AdjectiveDictionary["helpless"] = "Adjective";
        AdjectiveDictionary["hilarious"] = "Adjective";
        AdjectiveDictionary["gorgeous"] = "Adjective";
        AdjectiveDictionary["graceful"] = "Adjective";
        AdjectiveDictionary["grieving"] = "Adjective";
        AdjectiveDictionary["grotesque"] = "Adjective";
        AdjectiveDictionary["grumpy"] = "Adjective";
        AdjectiveDictionary["grungy"] = "Adjective";
        AdjectiveDictionary["homeless"] = "Adjective";
        AdjectiveDictionary["homely"] = "Adjective";
        AdjectiveDictionary["horrible"] = "Adjective";
        AdjectiveDictionary["hungry"] = "Adjective";
        AdjectiveDictionary["hurt"] = "Adjective";
        AdjectiveDictionary["hushed"] = "Adjective";
        AdjectiveDictionary["ill"] = "Adjective";
        AdjectiveDictionary["important"] = "Adjective";
        AdjectiveDictionary["impossible"] = "Adjective";
        AdjectiveDictionary["inexpensive"] = "Adjective";
        AdjectiveDictionary["innocent"] = "Adjective";
        AdjectiveDictionary["inquisitive"] = "Adjective";
        AdjectiveDictionary["lazy"] = "Adjective";
        AdjectiveDictionary["light"] = "Adjective";
        AdjectiveDictionary["lively"] = "Adjective";
        AdjectiveDictionary["lonely"] = "Adjective";
        AdjectiveDictionary["long"] = "Adjective";
        AdjectiveDictionary["lovely"] = "Adjective";
        AdjectiveDictionary["lucky"] = "Adjective";
        AdjectiveDictionary["itchy"] = "Adjective";
        AdjectiveDictionary["jealous"] = "Adjective";
        AdjectiveDictionary["jittery"] = "Adjective";
        AdjectiveDictionary["jolly"] = "Adjective";
        AdjectiveDictionary["joyous"] = "Adjective";
        AdjectiveDictionary["kind"] = "Adjective";
        AdjectiveDictionary["magnificent"] = "Adjective";
        AdjectiveDictionary["misty"] = "Adjective";
        AdjectiveDictionary["modern"] = "Adjective";
        AdjectiveDictionary["motionless"] = "Adjective";
        AdjectiveDictionary["muddy"] = "Adjective";
        AdjectiveDictionary["mushy"] = "Adjective";
        AdjectiveDictionary["mysterious"] = "Adjective";
        AdjectiveDictionary["nasty"] = "Adjective";
        AdjectiveDictionary["naughty"] = "Adjective";
        AdjectiveDictionary["nervous"] = "Adjective";
        AdjectiveDictionary["nice"] = "Adjective";
        AdjectiveDictionary["nutty"] = "Adjective";
        AdjectiveDictionary["obedient"] = "Adjective";
        AdjectiveDictionary["panicky"] = "Adjective";
        AdjectiveDictionary["perfect"] = "Adjective";
        AdjectiveDictionary["plain"] = "Adjective";
        AdjectiveDictionary["pleasant"] = "Adjective";
        AdjectiveDictionary["poised"] = "Adjective";
        AdjectiveDictionary["poor"] = "Adjective";
        AdjectiveDictionary["powerful"] = "Adjective";
        AdjectiveDictionary["obnoxious"] = "Adjective";
        AdjectiveDictionary["odd"] = "Adjective";
        AdjectiveDictionary["old-fashioned"] = "Adjective";
        AdjectiveDictionary["open"] = "Adjective";
        AdjectiveDictionary["outrageous"] = "Adjective";
        AdjectiveDictionary["outstanding"] = "Adjective";
        AdjectiveDictionary["precious"] = "Adjective";
        AdjectiveDictionary["prickly"] = "Adjective";
        AdjectiveDictionary["proud"] = "Adjective";
        AdjectiveDictionary["putrid"] = "Adjective";
        AdjectiveDictionary["puzzled"] = "Adjective";
        AdjectiveDictionary["quaint"] = "Adjective";
        AdjectiveDictionary["queasy"] = "Adjective";
        AdjectiveDictionary["real"] = "Adjective";
        AdjectiveDictionary["relieved"] = "Adjective";
        AdjectiveDictionary["repulsive"] = "Adjective";
        AdjectiveDictionary["rich"] = "Adjective";
        AdjectiveDictionary["scary"] = "Adjective";
        AdjectiveDictionary["selfish"] = "Adjective";
        AdjectiveDictionary["shiny"] = "Adjective";
        AdjectiveDictionary["shy"] = "Adjective";
        AdjectiveDictionary["silly"] = "Adjective";
        AdjectiveDictionary["sleepy"] = "Adjective";
        AdjectiveDictionary["smiling"] = "Adjective";
        AdjectiveDictionary["talented"] = "Adjective";
        AdjectiveDictionary["tame"] = "Adjective";
        AdjectiveDictionary["tasty"] = "Adjective";
        AdjectiveDictionary["tender"] = "Adjective";
        AdjectiveDictionary["tense"] = "Adjective";
        AdjectiveDictionary["terrible"] = "Adjective";
        AdjectiveDictionary["thankful"] = "Adjective";
        AdjectiveDictionary["thoughtful"] = "Adjective";
        AdjectiveDictionary["thoughtless"] = "Adjective";
        AdjectiveDictionary["tired"] = "Adjective";
        AdjectiveDictionary["smoggy"] = "Adjective";
        AdjectiveDictionary["sore"] = "Adjective";
        AdjectiveDictionary["sparkling"] = "Adjective";
        AdjectiveDictionary["splendid"] = "Adjective";
        AdjectiveDictionary["spotless"] = "Adjective";
        AdjectiveDictionary["stormy"] = "Adjective";
        AdjectiveDictionary["strange"] = "Adjective";
        AdjectiveDictionary["stupid"] = "Adjective";
        AdjectiveDictionary["successful"] = "Adjective";
        AdjectiveDictionary["super"] = "Adjective";
        AdjectiveDictionary["svelte"] = "Adjective";
        AdjectiveDictionary["tough"] = "Adjective";
        AdjectiveDictionary["troubled"] = "Adjective";
        AdjectiveDictionary["ugliest"] = "Adjective";
        AdjectiveDictionary["ugly"] = "Adjective";
        AdjectiveDictionary["uninterested"] = "Adjective";
        AdjectiveDictionary["unsightly"] = "Adjective";
        AdjectiveDictionary["unusual"] = "Adjective";
        AdjectiveDictionary["upset"] = "Adjective";
        AdjectiveDictionary["uptight"] = "Adjective";
        AdjectiveDictionary["useful"] = "Adjective";
        AdjectiveDictionary["vast"] = "Adjective";
        AdjectiveDictionary["victorious"] = "Adjective";
        AdjectiveDictionary["vivacious"] = "Adjective";
        AdjectiveDictionary["wandering"] = "Adjective";
        AdjectiveDictionary["weary"] = "Adjective";
        AdjectiveDictionary["wicked"] = "Adjective";
        AdjectiveDictionary["wide-eyed"] = "Adjective";
        AdjectiveDictionary["wild"] = "Adjective";
        AdjectiveDictionary["witty"] = "Adjective";
        AdjectiveDictionary["worried"] = "Adjective";
        AdjectiveDictionary["worrisome"] = "Adjective";
        AdjectiveDictionary["wrong"] = "Adjective";
        AdjectiveDictionary["zany"] = "Adjective";
        AdjectiveDictionary["zealous"] = "Adjective";

        DeterminerDictionary["the"] = "Determiner";
        DeterminerDictionary["a"] = "Determiner";
        DeterminerDictionary["an"] = "Determiner";
        DeterminerDictionary["this"] = "Determiner";
        DeterminerDictionary["that"] = "Determiner";
        DeterminerDictionary["these"] = "Determiner";
        DeterminerDictionary["those"] = "Determiner";
        DeterminerDictionary["my"] = "Determiner";
        DeterminerDictionary["your"] = "Determiner";
        DeterminerDictionary["his"] = "Determiner";
        DeterminerDictionary["her"] = "Determiner";
        DeterminerDictionary["its"] = "Determiner";
        DeterminerDictionary["our"] = "Determiner";
        DeterminerDictionary["their"] = "Determiner";
        DeterminerDictionary["few"] = "Determiner";
        DeterminerDictionary["little"] = "Determiner";
        DeterminerDictionary["much"] = "Determiner";
        DeterminerDictionary["many"] = "Determiner";
        DeterminerDictionary["most"] = "Determiner";
        DeterminerDictionary["some"] = "Determiner";
        DeterminerDictionary["any"] = "Determiner";
        DeterminerDictionary["enough"] = "Determiner";
        DeterminerDictionary["all"] = "Determiner";
        DeterminerDictionary["both"] = "Determiner";
        DeterminerDictionary["half"] = "Determiner";
        DeterminerDictionary["either"] = "Determiner";
        DeterminerDictionary["neither"] = "Determiner";
        DeterminerDictionary["each"] = "Determiner";
        DeterminerDictionary["every"] = "Determiner";
        DeterminerDictionary["other"] = "Determiner";
        DeterminerDictionary["another"] = "Determiner";
        DeterminerDictionary["such"] = "Determiner";
        DeterminerDictionary["what"] = "Determiner";
        DeterminerDictionary["rather"] = "Determiner";
        DeterminerDictionary["quite"] = "Determiner";

        PronounDictionary["I"] = "Pronoun";
        PronounDictionary["you"] = "Pronoun";
        PronounDictionary["he"] = "Pronoun";
        PronounDictionary["she"] = "Pronoun";
        PronounDictionary["it"] = "Pronoun";
        PronounDictionary["we"] = "Pronoun";
        PronounDictionary["you"] = "Pronoun";
        PronounDictionary["they"] = "Pronoun";

        AdpositionDictionary["be"] = "Adposition";
        AdpositionDictionary["across"] = "Adposition";
        AdpositionDictionary["against"] = "Adposition";
        AdpositionDictionary["along"] = "Adposition";
        AdpositionDictionary["among"] = "Adposition";
        AdpositionDictionary["around"] = "Adposition";
        AdpositionDictionary["at"] = "Adposition";
        AdpositionDictionary["before"] = "Adposition";
        AdpositionDictionary["behind"] = "Adposition";
        AdpositionDictionary["below"] = "Adposition";
        AdpositionDictionary["beneath"] = "Adposition";
        AdpositionDictionary["beside"] = "Adposition";
        AdpositionDictionary["between"] = "Adposition";
        AdpositionDictionary["by"] = "Adposition";
        AdpositionDictionary["down"] = "Adposition";
        AdpositionDictionary["from"] = "Adposition";
        AdpositionDictionary["in"] = "Adposition";
        AdpositionDictionary["into"] = "Adposition";
        AdpositionDictionary["near"] = "Adposition";
        AdpositionDictionary["of"] = "Adposition";
        AdpositionDictionary["off"] = "Adposition";
        AdpositionDictionary["on"] = "Adposition";
        AdpositionDictionary["to"] = "Adposition";
        AdpositionDictionary["toward"] = "Adposition";
        AdpositionDictionary["under"] = "Adposition";
        AdpositionDictionary["upon"] = "Adposition";
        AdpositionDictionary["with"] = "Adposition";
        AdpositionDictionary["within"] = "Adposition";

        VerbDictionary["am"] = "Verb";
        VerbDictionary["are"] = "Verb";
        VerbDictionary["have"] = "Verb";
        VerbDictionary["do"] = "Verb";
        VerbDictionary["say"] = "Verb";
        VerbDictionary["get"] = "Verb";
        VerbDictionary["make"] = "Verb";
        VerbDictionary["go"] = "Verb";
        VerbDictionary["know"] = "Verb";
        VerbDictionary["take"] = "Verb";
        VerbDictionary["see"] = "Verb";
        VerbDictionary["come"] = "Verb";
        VerbDictionary["think"] = "Verb";
        VerbDictionary["look"] = "Verb";
        VerbDictionary["want"] = "Verb";
        VerbDictionary["give"] = "Verb";
        VerbDictionary["use"] = "Verb";
        VerbDictionary["find"] = "Verb";
        VerbDictionary["tell"] = "Verb";
        VerbDictionary["ask"] = "Verb";
        VerbDictionary["work"] = "Verb";
        VerbDictionary["seem"] = "Verb";
        VerbDictionary["try"] = "Verb";
        VerbDictionary["call"] = "Verb";
        VerbDictionary["need"] = "Verb";
        VerbDictionary["help"] = "Verb";
        VerbDictionary["play"] = "Verb";
        VerbDictionary["move"] = "Verb";
        VerbDictionary["like"] = "Verb";
        VerbDictionary["live"] = "Verb";
        VerbDictionary["believe"] = "Verb";
        VerbDictionary["hold"] = "Verb";
        VerbDictionary["bring"] = "Verb";
        VerbDictionary["happen"] = "Verb";
        VerbDictionary["write"] = "Verb";
        VerbDictionary["provide"] = "Verb";
        VerbDictionary["sit"] = "Verb";
        VerbDictionary["stand"] = "Verb";
        VerbDictionary["lose"] = "Verb";
        VerbDictionary["pay"] = "Verb";
        VerbDictionary["meet"] = "Verb";
        VerbDictionary["include"] = "Verb";
        VerbDictionary["continue"] = "Verb";
        VerbDictionary["set"] = "Verb";
        VerbDictionary["learn"] = "Verb";
        VerbDictionary["change"] = "Verb";
        VerbDictionary["lead"] = "Verb";
        VerbDictionary["understand"] = "Verb";
        VerbDictionary["watch"] = "Verb";
        VerbDictionary["follow"] = "Verb";
        VerbDictionary["stop"] = "Verb";
        VerbDictionary["create"] = "Verb";
        VerbDictionary["speak"] = "Verb";
        VerbDictionary["read"] = "Verb";
        VerbDictionary["allow"] = "Verb";
        VerbDictionary["add"] = "Verb";
        VerbDictionary["spend"] = "Verb";
        VerbDictionary["grow"] = "Verb";
        VerbDictionary["open"] = "Verb";
        VerbDictionary["walk"] = "Verb";
        VerbDictionary["win"] = "Verb";
        VerbDictionary["offer"] = "Verb";
        VerbDictionary["remember"] = "Verb";
        VerbDictionary["consider"] = "Verb";
        VerbDictionary["is"] = "Verb";
        VerbDictionary["has"] = "Verb";
        VerbDictionary["does"] = "Verb";
        VerbDictionary["says"] = "Verb";
        VerbDictionary["gets"] = "Verb";
        VerbDictionary["makes"] = "Verb";
        VerbDictionary["goes"] = "Verb";
        VerbDictionary["knows"] = "Verb";
        VerbDictionary["takes"] = "Verb";
        VerbDictionary["sees"] = "Verb";
        VerbDictionary["comes"] = "Verb";
        VerbDictionary["thinks"] = "Verb";
        VerbDictionary["looks"] = "Verb";
        VerbDictionary["wants"] = "Verb";
        VerbDictionary["gives"] = "Verb";
        VerbDictionary["uses"] = "Verb";
        VerbDictionary["finds"] = "Verb";
        VerbDictionary["tells"] = "Verb";
        VerbDictionary["asks"] = "Verb";
        VerbDictionary["works"] = "Verb";
        VerbDictionary["seems"] = "Verb";
        VerbDictionary["tries"] = "Verb";
        VerbDictionary["calls"] = "Verb";
        VerbDictionary["needs"] = "Verb";
        VerbDictionary["asks"] = "Verb";
        VerbDictionary["helps"] = "Verb";
        VerbDictionary["plays"] = "Verb";
        VerbDictionary["moves"] = "Verb";
        VerbDictionary["likes"] = "Verb";
        VerbDictionary["lives"] = "Verb";
        VerbDictionary["believes"] = "Verb";
        VerbDictionary["holds"] = "Verb";
        VerbDictionary["brings"] = "Verb";
        VerbDictionary["happens"] = "Verb";
        VerbDictionary["writes"] = "Verb";
        VerbDictionary["provides"] = "Verb";
        VerbDictionary["sits"] = "Verb";
        VerbDictionary["stands"] = "Verb";
        VerbDictionary["loses"] = "Verb";
        VerbDictionary["pays"] = "Verb";
        VerbDictionary["meets"] = "Verb";
        VerbDictionary["includes"] = "Verb";
        VerbDictionary["continues"] = "Verb";
        VerbDictionary["sets"] = "Verb";
        VerbDictionary["learns"] = "Verb";
        VerbDictionary["changes"] = "Verb";
        VerbDictionary["leads"] = "Verb";
        VerbDictionary["understands"] = "Verb";
        VerbDictionary["watches"] = "Verb";
        VerbDictionary["follows"] = "Verb";
        VerbDictionary["stops"] = "Verb";
        VerbDictionary["creates"] = "Verb";
        VerbDictionary["speaks"] = "Verb";
        VerbDictionary["reads"] = "Verb";
        VerbDictionary["allows"] = "Verb";
        VerbDictionary["adds"] = "Verb";
        VerbDictionary["spends"] = "Verb";
        VerbDictionary["grows"] = "Verb";
        VerbDictionary["opens"] = "Verb";
        VerbDictionary["walks"] = "Verb";
        VerbDictionary["wins"] = "Verb";
        VerbDictionary["offers"] = "Verb";
        VerbDictionary["remembers"] = "Verb";
        VerbDictionary["loves"] = "Verb";
        VerbDictionary["considers"] = "Verb";
        VerbDictionary["appears"] = "Verb";
        VerbDictionary["buys"] = "Verb";
        VerbDictionary["waits"] = "Verb";
        VerbDictionary["serves"] = "Verb";
        VerbDictionary["dies"] = "Verb";
        VerbDictionary["talks"] = "Verb";
        VerbDictionary["travels"] = "Verb";
        VerbDictionary["reaches"] = "Verb";
        VerbDictionary["catches"] = "Verb";
        VerbDictionary["passes"] = "Verb";
        VerbDictionary["sells"] = "Verb";
        VerbDictionary["explains"] = "Verb";
        VerbDictionary["hopes"] = "Verb";
        VerbDictionary["develops"] = "Verb";
        VerbDictionary["carries"] = "Verb";
        VerbDictionary["breaks"] = "Verb";
        VerbDictionary["returns"] = "Verb";
        VerbDictionary["supports"] = "Verb";
        VerbDictionary["builds"] = "Verb";
        VerbDictionary["falls"] = "Verb";
        VerbDictionary["receives"] = "Verb";
        VerbDictionary["includes"] = "Verb";
        VerbDictionary["plays"] = "Verb";
        VerbDictionary["lives"] = "Verb";
        VerbDictionary["was"] = "Verb";
        VerbDictionary["creates"] = "Verb";
        VerbDictionary["writes"] = "Verb";
        VerbDictionary["spends"] = "Verb";
        VerbDictionary["opens"] = "Verb";
        VerbDictionary["walks"] = "Verb";
        VerbDictionary["wins"] = "Verb";
        VerbDictionary["offers"] = "Verb";
        VerbDictionary["remembers"] = "Verb";
        VerbDictionary["considers"] = "Verb";
        VerbDictionary["loves"] = "Verb";

        NounDictionary["time"] = "Noun";
        NounDictionary["person"] = "Noun";
        NounDictionary["year"] = "Noun";
        NounDictionary["way"] = "Noun";
        NounDictionary["day"] = "Noun";
        NounDictionary["man"] = "Noun";
        NounDictionary["government"] = "Noun";
        NounDictionary["company"] = "Noun";
        NounDictionary["hand"] = "Noun";
        NounDictionary["part"] = "Noun";
        NounDictionary["place"] = "Noun";
        NounDictionary["case"] = "Noun";
        NounDictionary["problem"] = "Noun";
        NounDictionary["fact"] = "Noun";
        NounDictionary["eye"] = "Noun";
        NounDictionary["friend"] = "Noun";
        NounDictionary["stringge"] = "Noun";
        NounDictionary["home"] = "Noun";
        NounDictionary["business"] = "Noun";
        NounDictionary["mother"] = "Noun";
        NounDictionary["question"] = "Noun";
        NounDictionary["state"] = "Noun";
        NounDictionary["office"] = "Noun";
        NounDictionary["book"] = "Noun";
        NounDictionary["water"] = "Noun";
        NounDictionary["car"] = "Noun";
        NounDictionary["group"] = "Noun";
        NounDictionary["face"] = "Noun";
        NounDictionary["door"] = "Noun";
        NounDictionary["education"] = "Noun";
        NounDictionary["system"] = "Noun";
        NounDictionary["number"] = "Noun";
        NounDictionary["month"] = "Noun";
        NounDictionary["lot"] = "Noun";
        NounDictionary["right"] = "Noun";
        NounDictionary["research"] = "Noun";
        NounDictionary["job"] = "Noun";
        NounDictionary["experience"] = "Noun";
        NounDictionary["moment"] = "Noun";
        NounDictionary["money"] = "Noun";
        NounDictionary["level"] = "Noun";
        NounDictionary["reason"] = "Noun";
        NounDictionary["research"] = "Noun";
        NounDictionary["study"] = "Noun";
        NounDictionary["effect"] = "Noun";
        NounDictionary["friend"] = "Noun";
        NounDictionary["interest"] = "Noun";
        NounDictionary["health"] = "Noun";
        NounDictionary["mother"] = "Noun";
        NounDictionary["truth"] = "Noun";
        NounDictionary["country"] = "Noun";
        NounDictionary["knowledge"] = "Noun";
        NounDictionary["time"] = "Noun";
        NounDictionary["child"] = "Noun";
        NounDictionary["family"] = "Noun";
        NounDictionary["day"] = "Noun";
        NounDictionary["student"] = "Noun";
        NounDictionary["law"] = "Noun";
        NounDictionary["group"] = "Noun";
        NounDictionary["problem"] = "Noun";
        NounDictionary["fact"] = "Noun";
        NounDictionary["action"] = "Noun";
        NounDictionary["friend"] = "Noun";
        NounDictionary["term"] = "Noun";
        NounDictionary["place"] = "Noun";
        NounDictionary["issue"] = "Noun";
        NounDictionary["matter"] = "Noun";
        NounDictionary["kind"] = "Noun";
        NounDictionary["job"] = "Noun";
        NounDictionary["study"] = "Noun";
        NounDictionary["book"] = "Noun";
        NounDictionary["food"] = "Noun";
        NounDictionary["hand"] = "Noun";
        NounDictionary["place"] = "Noun";
        NounDictionary["group"] = "Noun";
        NounDictionary["problem"] = "Noun";
        NounDictionary["fact"] = "Noun";
        NounDictionary["product"] = "Noun";
        NounDictionary["idea"] = "Noun";
        NounDictionary["company"] = "Noun";
        NounDictionary["system"] = "Noun";
        NounDictionary["body"] = "Noun";
        NounDictionary["method"] = "Noun";
        NounDictionary["information"] = "Noun";
        NounDictionary["music"] = "Noun";
        NounDictionary["fact"] = "Noun";
        NounDictionary["word"] = "Noun";
        NounDictionary["parent"] = "Noun";
        NounDictionary["face"] = "Noun";
        NounDictionary["group"] = "Noun";
        NounDictionary["problem"] = "Noun";
        NounDictionary["fact"] = "Noun";
        NounDictionary["question"] = "Noun";
        NounDictionary["child"] = "Noun";
        NounDictionary["person"] = "Noun";
        NounDictionary["case"] = "Noun";
        NounDictionary["problem"] = "Noun";
    }
};