#pragma once
#include "CategoryUtils.hpp"
#include "util/Joaat.hpp"

namespace YimMenu
{
	struct PedExpressionDefinition : public ModelDefinition
	{
	};

	inline std::vector<PedExpressionDefinition> g_PedExpressions = {
	    {401860102, "None"},
	    {43014794, "Action"},
	    {3306557655, "Agitated"},
	    {3087050993, "Agitated Canter"},
	    {1310022809, "Agitated Gallop"},
	    {1319768939, "Agitated Low"},
	    {2306321001, "Agitated Trot"},
	    {1135495908, "Agitated Walk"},
	    {655768033, "Aiming"},
	    {3575426397, "Aiming Lasso"},
	    {2185109471, "Aiming Pistol"},
	    {2988776538, "Aiming Rifle"},
	    {137506481, "Angry"},
	    {2877675460, "Angry Injured"},
	    {1201781013, "Bitchy"},
	    {548692659, "Blizzard"},
	    {1121482260, "Blizzrd Frozen"},
	    {1474238770, "Bracing"},
	    {5493647, "Brave"},
	    {508439356, "Bucking"},
	    {3046655719, "Canter Stop"},
	    {3254749600, "Carry Large"},
	    {3104036806, "Cautious"},
	    {2697749096, "Charging"},
	    {112410519, "Choked"},
	    {599192531, "Choked Mild"},
	    {1931057439, "Choked Rear"},
	    {3070686211, "Cocky"},
	    {1679333685, "Cold"},
	    {2903379502, "Combat Medium"},
	    {4148843057, "Combat Mild"},
	    {2627161094, "Concentration"},
	    {1382425677, "Concentration Extreme"},
	    {2595289108, "Confused"},
	    {827008165, "Coughing"},
	    {970990189, "Cower"},
	    {3537998118, "Curious"},
	    {2312123450, "Dead"},
	    {159713133, "Dead And Mouth Looted"},
	    {4077158553, "Defuse"},
	    {1116928067, "Disgust"},
	    {1402264079, "Drowning"},
	    {2720706073, "Drunk Extreme"},
	    {2964193846, "Drunk Medium"},
	    {3032813660, "Drunk Mild"},
	    {1570804069, "Electrocution"},
	    {320243264, "Exertion Extreme"},
	    {2733173319, "Exertion Medium"},
	    {4216183788, "Exertion Mild"},
	    {2969106131, "Exhausted"},
	    {2287684162, "Exhausted Mild"},
	    {2986631737, "Fall Large"},
	    {1156137097, "Fall Small"},
	    {3108112960, "Foliage"},
	    {1353502725, "Gallop Stop"},
	    {3161300050, "Groom"},
	    {746733444, "Happy"},
	    {3155209533, "Hot"},
	    {459203337, "Injured Extreme"},
	    {1867273634, "Injured Medium"},
	    {3014186447, "Injured Mild"},
	    {3132314318, "Intimidate"},
	    {816500609, "Intimidated"},
	    {3678021507, "Investigate"},
	    {112825101, "Knocked Out"},
	    {1480593619, "Lassoed"},
	    {1057824557, "Low Deadeye"},
	    {4245131357, "Low Health"},
	    {3642601736, "Low Stamina"},
	    {1122547698, "Near Fire"},
	    {3652126712, "Nervous"},
	    {3569615413, "Normal"},
	    {3152476129, "Normal Canter"},
	    {295039378, "Normal Gallop"},
	    {690358560, "Normal Neutral"},
	    {2819466789, "Normal Sick"},
	    {1868948693, "Normal Trot"},
	    {3526252297, "Normal Walk"},
	    {1040888787, "On Fire"},
	    {3729996742, "Panic"},
	    {1630212626, "Rapids"},
	    {3345095814, "Recovery"},
	    {3292262768, "Riding"},
	    {3416791357, "Riding Relaxed"},
	    {3568911481, "Run"},
	    {1164001287, "Sad"},
	    {3626470550, "Sad Extreme"},
	    {3716590166, "Scared"},
	    {1571672020, "Search High"},
	    {1968015893, "Search Low"},
	    {456668268, "Seductive"},
	    {2583247227, "Shocked"},
	    {1083628229, "Shocked Mild"},
	    {1986369795, "Shunting"},
	    {188835728, "Sleeping"},
	    {2726461858, "Slide"},
	    {3206406034, "Sliding"},
	    {4283568788, "Slope"},
	    {3347446607, "Smug"},
	    {906951161, "Stalking"},
	    {1333898231, "Stealth"},
	    {3277102012, "Stopping"},
	    {2404361576, "Stressed"},
	    {4169919907, "Submissive"},
	    {3167933328, "Sulk"},
	    {4220021394, "Swamp"},
	    {4143330964, "Swim"},
	    {1751822680, "Talking"},
	    {1697543443, "Talking Happy"},
	    {2403592533, "Tired"},
	    {595270176, "Tired Mild"},
	    {2574913652, "Trot Stop"},
	    {941081878, "Underfire"},
	    {3090727357, "Underfire Heavy"},
	    {1753789440, "Underfire Mild"},
	    {479798140, "Walk Stop"},
	    {510645846, "Water"},
	    {4127737830, "Wind Extreme"},
	    {1409412588, "Wind Medium"},
	    {2444376960, "Wind Mild"},
	};
}