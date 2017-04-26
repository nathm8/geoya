#ifndef constants_hpp
#define constants_hpp

#include <random>
#include <unordered_map>
#include <array>
#include <set>
#include <SFML/Graphics.hpp>
#include "Vector.hpp"

const float pi = 3.1415;

const sf::Color Red = sf::Color(255, 0, 0.0);
const sf::Color Blue = sf::Color(0.0, 0, 255);
const sf::Color Green = sf::Color(0.0, 255, 0.0);
const sf::Color Yellow = sf::Color(128, 128, 0.0);
const sf::Color Grey = sf::Color(128, 128, 128);
const sf::Color LightGrey = sf::Color(200, 200, 200);
const sf::Color DarkGrey = sf::Color(5, 5, 5);
const sf::Color Transparent = sf::Color(0.0, 0, 0, 0.0);
const sf::Color HalfTransparent = sf::Color(255, 255, 255, 50);

const sf::Color White = sf::Color(255, 255, 255);
const sf::Color Brown = sf::Color(139, 69, 19);

const sf::Color AIR_COLOUR = sf::Color(230, 230, 230);
const sf::Color FIRE_COLOUR = sf::Color(128, 0, 0);
const sf::Color WATER_COLOUR = sf::Color(0, 0, 128);
const sf::Color EARTH_COLOUR = sf::Color(0, 128, 0);
const sf::Color LIFE_COLOUR = sf::Color(255, 212, 42);
const sf::Color DEATH_COLOUR = Grey;//sf::Color(0, 0, 0);

const float RADIANS_TO_DEGREES = 180/pi;
const float DEGREES_TO_RADIANS = pi/180;

const float SQRT3 = 1.7320;

const int WIDTH = 1920;
const int HEIGHT = 1080;

const double HAND_DRIFT = 50;

const int NUM_FINGERS = 5;

const int MAX_FRAMES = 4;
const double FINGER_FRAME_TIME = 1.0/24.0;
const double GESTURE_FRAME_TIME = 1.0/12.0;
const double GLYPH_DRAW_TIME = 2.5;

const Vector BASE_POS(WIDTH/2, HEIGHT-500);
const Vector RIGHTHAND_POS(500, 0);
const Vector LEFTHAND_POS(-500, 0);
const Vector GLYPH_POS(0, -250);
const double GLYPH_SCALE = 100.0;
const double GLYPH_MOVEMENT_SCALE = 100.0;
const double GLYPH_THICKNESS = 10.0;

enum class FingerState {Opening, Open, Closing, Closed};
enum class HandState {None, WindUp, Hold, WindDown, Cancel};
enum class Gesture {None, Air, Fire, Earth, Water, Life, Death, Vert, Horz, Cast, Rotate};
enum class HandDataState {None, Wandering, Holding, Moving, Drawing, Modifying};

const std::vector<Vector> EARTHSQUARE = {
    Vector(-1, 1),
    Vector(1, 1),
    Vector(1, -1),
    Vector(-1, -1),
    Vector(-1, 1),
};

const std::vector<Vector> WATERCIRCLE = {
    Vector(-0.7071, 0.7071),
    Vector(-0.5555, 0.8314),
    Vector(-0.3826, 0.9238),
    Vector(-0.1950, 0.9807),
    Vector(0.0, 1.0),
    Vector(0.1950, 0.9807),
    Vector(0.3826, 0.9238),
    Vector(0.5555, 0.8314),
    Vector(0.7071, 0.7071),
    Vector(0.8314, 0.5555),
    Vector(0.9238, 0.3826),
    Vector(0.9807, 0.1950),
    Vector(1.0, 0.0),
    Vector(0.9807, -0.1950),
    Vector(0.9238, -0.3826),
    Vector(0.8314, -0.5555),
    Vector(0.7071, -0.7071),
    Vector(0.5555, -0.8314),
    Vector(0.3826, -0.9238),
    Vector(0.1950, -0.9807),
    Vector(0.0, -1.0),
    Vector(-0.1950, -0.9807),
    Vector(-0.3826, -0.9238),
    Vector(-0.5555, -0.8314),
    Vector(-0.7071, -0.7071),
    Vector(-0.8314, -0.5555),
    Vector(-0.9238, -0.3826),
    Vector(-0.9807, -0.1950),
    Vector(-1.0, 0.0),
    Vector(-0.9807, 0.1950),
    Vector(-0.9238, 0.3826),
    Vector(-0.8314, 0.5555),
    Vector(-0.7071, 0.7071),
};

const std::vector<Vector> FIRETRIANGLE = {
    Vector(-1.0, 0.933),
    Vector(0.0, -0.933),
    Vector(1.0, 0.933),
    Vector(-1.0, 0.933),
};

const std::vector<Vector> AIRLINES = {
    Vector(-0.9955, -0.4203),
    Vector(-0.9707, -0.5170),
    Vector(-0.9275, -0.6071),
    Vector(-0.8676, -0.6871),
    Vector(-0.7932, -0.7538),
    Vector(-0.7072, -0.8047),
    Vector(-0.6130, -0.8378),
    Vector(-0.5141, -0.8519),
    Vector(-0.4143, -0.8465),
    Vector(-0.3175, -0.8217),
    Vector(-0.2274, -0.7785),
    Vector(-0.1475, -0.7185),
    Vector(-0.0808, -0.6442),
    Vector(-0.0299, -0.5582),
    Vector(0.0308, -0.3912),
    Vector(0.0817, -0.3053),
    Vector(0.1484, -0.2309),
    Vector(0.2283, -0.1709),
    Vector(0.3184, -0.1277),
    Vector(0.4152, -0.1029),
    Vector(0.5149, -0.0975),
    Vector(0.6138, -0.1116),
    Vector(0.7081, -0.1448),
    Vector(0.7941, -0.1957),
    Vector(0.8684, -0.2624),
    Vector(0.9284, -0.3423),
    Vector(0.9716, -0.4324),
    Vector(0.9964, -0.5292),
    Vector(0.9955, 0.4203),    
    Vector(0.9707, 0.5170),
    Vector(0.9275, 0.6071),
    Vector(0.8676, 0.6871),
    Vector(0.7932, 0.7538),
    Vector(0.7072, 0.8047),
    Vector(0.6130, 0.8378),
    Vector(0.5141, 0.8519),
    Vector(0.4143, 0.8465),
    Vector(0.3175, 0.8217),
    Vector(0.2274, 0.7785),
    Vector(0.1475, 0.7185),
    Vector(0.0808, 0.6442),
    Vector(0.0299, 0.5582),
    Vector(-0.0308, 0.3912),
    Vector(-0.0817, 0.3053),
    Vector(-0.1484, 0.2309),
    Vector(-0.2283, 0.1709),
    Vector(-0.3184, 0.1277),
    Vector(-0.4152, 0.1029),
    Vector(-0.5149, 0.0975),
    Vector(-0.6138, 0.1116),
    Vector(-0.7081, 0.1448),
    Vector(-0.7941, 0.1957),
    Vector(-0.8684, 0.2624),
    Vector(-0.9284, 0.3423),
    Vector(-0.9716, 0.4324),
    Vector(-0.9964, 0.5292),
};

const std::vector<Vector> AIRLINES_MOVE = {
    Vector(-0.9955, -0.4203),
    Vector(-0.9707, -0.5170),
    Vector(-0.9275, -0.6071),
    Vector(-0.8676, -0.6871),
    Vector(-0.7932, -0.7538),
    Vector(-0.7072, -0.8047),
    Vector(-0.6130, -0.8378),
    Vector(-0.5141, -0.8519),
    Vector(-0.4143, -0.8465),
    Vector(-0.3175, -0.8217),
    Vector(-0.2274, -0.7785),
    Vector(-0.1475, -0.7185),
    Vector(-0.0808, -0.6442),
    Vector(-0.0299, -0.5582),
    Vector(0.0308, -0.3912),
    Vector(0.0817, -0.3053),
    Vector(0.1484, -0.2309),
    Vector(0.2283, -0.1709),
    Vector(0.3184, -0.1277),
    Vector(0.4152, -0.1029),
    Vector(0.5149, -0.0975),
    Vector(0.6138, -0.1116),
    Vector(0.7081, -0.1448),
    Vector(0.7941, -0.1957),
    Vector(0.8684, -0.2624),
    Vector(0.9284, -0.3423),
    Vector(0.9716, -0.4324),
    Vector(0.9964, -0.5292),
    
    Vector(0.9964, -0.5292),
    Vector(0.9716, -0.4324),
    Vector(0.9284, -0.3423),
    Vector(0.8684, -0.2624),
    Vector(0.7941, -0.1957),
    Vector(0.7081, -0.1448),
    Vector(0.6138, -0.1116),
    Vector(0.5149, -0.0975),
    Vector(0.4152, -0.1029),
    Vector(0.3184, -0.1277),
    Vector(0.2283, -0.1709),
    Vector(0.1484, -0.2309),
    Vector(0.0817, -0.3053),
    Vector(0.0308, -0.3912),
    Vector(-0.0299, -0.5582),
    Vector(-0.0808, -0.6442),
    Vector(-0.1475, -0.7185),
    Vector(-0.2274, -0.7785),
    Vector(-0.3175, -0.8217),
    Vector(-0.4143, -0.8465),
    Vector(-0.5141, -0.8519),
    Vector(-0.6130, -0.8378),
    Vector(-0.7072, -0.8047),
    Vector(-0.7932, -0.7538),
    Vector(-0.8676, -0.6871),
    Vector(-0.9275, -0.6071),
    Vector(-0.9707, -0.5170),
    Vector(-0.9955, -0.4203),
};

const std::vector<Vector> DEATHCROSS = {
    Vector(-1, 1),
    Vector(1, -1),
    Vector(-1, -1),
    Vector(1, 1),
};

const std::vector<Vector> LIFESQUIGGLE = {
    Vector(0.0, 0.8230),
    Vector(-0.0881, 0.8954),
    Vector(-0.1888, 0.9492),
    Vector(-0.2979, 0.9823),
    Vector(-0.4115, 0.9935),
    Vector(-0.5250, 0.9823),
    Vector(-0.6342, 0.9492),
    Vector(-0.7348, 0.8954),
    Vector(-0.8230, 0.8230),
    Vector(-0.8954, 0.7348),
    Vector(-0.9492, 0.6342),
    Vector(-0.9823, 0.5250),
    Vector(-0.9935, 0.4115),
    Vector(-0.9823, 0.2979),
    Vector(-0.9492, 0.1888),
    Vector(-0.8954, 0.0881),
    Vector(-0.8230, 0.0),
    Vector(-0.7348, -0.0724),
    Vector(-0.6342, -0.1261),
    Vector(-0.5250, -0.1593),
    Vector(-0.4115, -0.1704),
    Vector(-0.2979, -0.1593),
    Vector(-0.1888, -0.1261),
    Vector(-0.0881, -0.0724),
    Vector(0.0, 0.0),
    Vector(0.0881, 0.0724),
    Vector(0.1888, 0.1261),
    Vector(0.2979, 0.1593),
    Vector(0.4115, 0.1704),
    Vector(0.5250, 0.1593),
    Vector(0.6342, 0.1261),
    Vector(0.7348, 0.0724),
    Vector(0.8230, 0.0),
    Vector(0.8954, -0.0881),
    Vector(0.9492, -0.1888),
    Vector(0.9823, -0.2979),
    Vector(0.9935, -0.4115),
    Vector(0.9823, -0.5250),
    Vector(0.9492, -0.6342),
    Vector(0.8954, -0.7348),
    Vector(0.8230, -0.8230),
    Vector(0.7348, -0.8954),
    Vector(0.6342, -0.9492),
    Vector(0.5250, -0.9823),
    Vector(0.4115, -0.9935),
    Vector(0.2979, -0.9823),
    Vector(0.1888, -0.9492),
    Vector(0.0881, -0.8954),
    Vector(0.0, -0.8230),
};

const std::set<Gesture> DRAWABLE_GESTURE = {
    Gesture::Air,
    Gesture::Fire,
    Gesture::Earth,
    Gesture::Water,
    Gesture::Life,
    Gesture::Death,
};

const std::set<Gesture> TWO_LINE_GESTURE = {
    Gesture::Air,
    Gesture::Death,
};

const std::unordered_map<Gesture, std::vector<Vector>> GESTURE_TO_MOVE = {
    {Gesture::Air, AIRLINES_MOVE},
    {Gesture::Fire, FIRETRIANGLE},
    {Gesture::Earth, EARTHSQUARE},
    {Gesture::Water, WATERCIRCLE},
    {Gesture::Life, LIFESQUIGGLE},
    {Gesture::Death, DEATHCROSS},
};

const std::unordered_map<Gesture, std::vector<Vector>> GESTURE_TO_GLYPH = {
    {Gesture::Air, AIRLINES},
    {Gesture::Fire, FIRETRIANGLE},
    {Gesture::Earth, EARTHSQUARE},
    {Gesture::Water, WATERCIRCLE},
    {Gesture::Life, LIFESQUIGGLE},
    {Gesture::Death, DEATHCROSS},
};

const std::unordered_map<Gesture, sf::Color> GESTURE_TO_COLOUR = {
    {Gesture::Air, AIR_COLOUR},
    {Gesture::Fire, FIRE_COLOUR},
    {Gesture::Earth, EARTH_COLOUR},
    {Gesture::Water, WATER_COLOUR},
    {Gesture::Life, LIFE_COLOUR},
    {Gesture::Death, DEATH_COLOUR},
};

const std::unordered_map<std::string, std::array<int, 6>> FrontSpriteOffsets = {
    {"FrontLife5", {0, 0, 200, 628, 366, 236}},
    {"FrontLife4", {200, 0, 252, 624, 342, 254}},
    {"FrontDeath5", {452, 0, 398, 547, 382, 115}},
    {"FrontDeath4", {850, 0, 462, 534, 230, 183}},
    {"FrontCast5", {1312, 0, 521, 525, 182, 184}},
    {"FrontFire5", {1833, 0, 522, 320, 233, 531}},
    {"FrontAir3", {2355, 0, 211, 517, 366, 408}},
    {"FrontFire4", {2566, 0, 511, 320, 233, 531}},
    {"FrontCast4", {3077, 0, 496, 420, 202, 249}},
    {"FrontAir2", {3573, 0, 327, 490, 317, 414}},
    {"FrontLife3", {1833, 320, 434, 485, 221, 414}},
    {"FrontFire3", {2566, 320, 479, 320, 233, 531}},
    {"FrontWater4", {3045, 420, 300, 478, 304, 404}},
    {"FrontLife2", {3345, 490, 475, 374, 199, 500}},
    {"FrontWater3", {1312, 525, 419, 466, 239, 433}},
    {"FrontWater5", {3820, 490, 244, 465, 334, 405}},
    {"FrontRotate5", {850, 534, 370, 458, 290, 429}},
    {"FrontWater2", {200, 624, 447, 372, 227, 501}},
    {"FrontFire2", {2267, 640, 446, 320, 233, 531}},
    {"FrontRotate4", {1731, 805, 387, 438, 279, 439}},
    {"FrontFire1", {3345, 864, 436, 320, 233, 531}},
    {"FrontLife1", {2713, 898, 436, 320, 233, 531}},
    {"FrontEarth1", {2118, 960, 436, 320, 233, 531}},
    {"FrontWater1", {1220, 991, 436, 320, 233, 531}},
    {"FrontCast3", {647, 992, 430, 176, 249, 462}},
    {"FrontEarth2", {0, 996, 427, 320, 242, 531}},
    {"FrontDeath2", {427, 1168, 413, 424, 244, 422}},
    {"FrontAir4", {840, 1168, 364, 424, 377, 466}},
    {"FrontHorz5", {3149, 1184, 414, 329, 351, 517}},
    {"FrontRotate3", {3563, 1184, 411, 372, 263, 473}},
    {"FrontDeath3", {2554, 1218, 375, 410, 240, 342}},
    {"FrontHorz4", {1656, 1243, 407, 328, 345, 519}},
    {"FrontRotate2", {2063, 1280, 405, 296, 268, 514}},
    {"FrontHorz3", {1204, 1311, 404, 326, 313, 524}},
    {"FrontCast2", {0, 1316, 404, 285, 265, 533}},
    {"FrontEarth3", {2929, 1513, 403, 320, 266, 531}},
    {"FrontHorz2", {3332, 1556, 398, 322, 282, 529}},
    {"FrontDeath1", {1608, 1571, 398, 320, 271, 531}},
    {"FrontAir1", {2006, 1576, 398, 320, 271, 531}},
    {"FrontHorz1", {404, 1592, 398, 320, 271, 531}},
    {"FrontCast1", {802, 1592, 398, 320, 271, 531}},
    {"FrontVert1", {0, 1601, 398, 320, 271, 531}},
    {"FrontAir5", {2404, 1628, 398, 312, 382, 529}},
    {"FrontVert2", {1200, 1637, 398, 300, 271, 532}},
    {"FrontRotate1", {2802, 1833, 398, 293, 271, 531}},
    {"FrontVert5", {3200, 1878, 398, 247, 271, 434}},
    {"FrontVert3", {3598, 1878, 398, 239, 271, 535}},
    {"FrontVert4", {1598, 1891, 398, 231, 271, 477}},
    {"FrontEarth4", {1996, 1896, 378, 320, 291, 531}},
    {"FrontEarth5", {398, 1912, 368, 320, 301, 531}},
    {"FrontPalm", {2713, 640, 318, 200, 351, 531}},
    {"Front0Close5", {3820, 955, 125, 207, 271, 617}},
    {"Front0Close4", {2554, 960, 117, 207, 269, 616}},
    {"Front0Close3", {1731, 525, 92, 192, 266, 615}},
    {"Front0Close2", {1077, 992, 108, 160, 249, 615}},
    {"Front0Close1", {2118, 805, 124, 148, 233, 615}},
    
    {"Front1Close1", {2468, 1280, 53, 142, 388, 654}},
    {"Front1Close2", {2802, 1628, 53, 198, 388, 654}},
    {"Front1Close3", {2267, 320, 53, 262, 388, 654}},
    {"Front1Close4", {1656, 991, 53, 214, 388, 655}},
    {"Front1Close5", {2855, 1628, 53, 195, 388, 656}},
    
    {"Front2Close1", {2468, 1280, 53, 142, 463, 654}},
    {"Front2Close2", {2802, 1628, 53, 198, 463, 654}},
    {"Front2Close3", {2267, 320, 53, 262, 463, 654}},
    {"Front2Close4", {1656, 991, 53, 214, 463, 655}},
    {"Front2Close5", {2855, 1628, 53, 195, 463, 656}},
    
    {"Front3Close1", {2468, 1280, 53, 142, 538, 654}},
    {"Front3Close2", {2802, 1628, 53, 198, 538, 654}},
    {"Front3Close3", {2267, 320, 53, 262, 538, 654}},
    {"Front3Close4", {1656, 991, 53, 214, 538, 655}},
    {"Front3Close5", {2855, 1628, 53, 195, 538, 656}},
    
    {"Front4Close1", {2468, 1280, 53, 142, 613, 654}},
    {"Front4Close2", {2802, 1628, 53, 198, 613, 654}},
    {"Front4Close3", {2267, 320, 53, 262, 613, 654}},
    {"Front4Close4", {1656, 991, 53, 214, 613, 655}},
    {"Front4Close5", {2855, 1628, 53, 195, 613, 656}},
};

const std::unordered_map<std::string, std::array<int, 6>> TopBackSpriteOffsets = {
    {"TopBackAir3", {0, 0, 211, 649, 422, 329}},
    {"TopBackAir2", {211, 0, 328, 647, 354, 331}},
    {"TopBackRotate5", {539, 0, 371, 638, 338, 335}},
    {"TopBackRotate4", {910, 0, 387, 632, 332, 338}},
    {"TopBackHorz5", {1297, 0, 415, 621, 233, 351}},
    {"TopBackHorz4", {1712, 0, 407, 617, 246, 351}},
    {"TopBackRotate3", {2119, 0, 411, 611, 324, 348}},
    {"TopBackHorz3", {2530, 0, 405, 602, 281, 354}},
    {"TopBackDeath3", {2935, 0, 375, 602, 383, 358}},
    {"TopBackAir4", {3310, 0, 364, 599, 257, 360}},
    {"TopBackDeath2", {3674, 0, 414, 591, 341, 346}},
    {"TopBackVert3", {3674, 591, 398, 589, 329, 341}},
    {"TopBackVert4", {2530, 602, 398, 588, 329, 341}},
    {"TopBackRotate2", {2928, 602, 404, 584, 326, 361}},
    {"TopBackVert5", {2119, 611, 398, 584, 329, 347}},
    {"TopBackVert2", {1712, 617, 398, 582, 329, 355}},
    {"TopBackHorz2", {1297, 621, 398, 582, 318, 362}},
    {"TopBackWater2", {539, 638, 447, 577, 324, 372}},
    {"TopBackFire2", {0, 649, 445, 574, 320, 365}},
    {"TopBackFire5", {3332, 1180, 522, 573, 243, 366}},
    {"TopBackFire4", {2517, 1190, 510, 573, 255, 366}},
    {"TopBackFire3", {1695, 1199, 478, 573, 287, 366}},
    {"TopBackFire1", {986, 1203, 436, 573, 329, 366}},
    {"TopBackEarth1", {445, 1215, 436, 573, 329, 366}},
    {"TopBackWater1", {0, 1223, 436, 573, 329, 366}},
    {"TopBackEarth2", {3027, 1753, 427, 573, 329, 366}},
    {"TopBackEarth3", {3454, 1753, 403, 573, 329, 366}},
    {"TopBackVert1", {2173, 1763, 398, 573, 329, 366}},
    {"TopBackRotate1", {2571, 1763, 398, 573, 329, 366}},
    {"TopBackDeath1", {1422, 1772, 398, 573, 329, 366}},
    {"TopBackAir1", {881, 1776, 398, 573, 329, 366}},
    {"TopBackHorz1", {436, 1788, 398, 573, 329, 366}},
    {"TopBackEarth4", {0, 1796, 378, 573, 329, 366}},
    {"TopBackEarth5", {2969, 2326, 369, 573, 329, 366}},
    {"TopBackAir5", {3338, 2326, 398, 556, 219, 382}},
    {"TopBackWater3", {1820, 2336, 420, 544, 340, 428}},
    {"TopBackWater5", {1422, 1203, 245, 525, 420, 454}},
    {"TopBackWater4", {3027, 1186, 299, 524, 395, 456}},
    {"TopBackCast3", {2240, 2336, 430, 522, 319, 413}},
    {"TopBackCast5", {1279, 2345, 520, 378, 296, 302}},
    {"TopBackLife5", {986, 632, 200, 503, 433, 475}},
    {"TopBackLife3", {834, 2349, 434, 498, 343, 475}},
    {"TopBackLife4", {2173, 1195, 252, 498, 405, 482}},
    {"TopBackCast4", {0, 2369, 496, 484, 300, 328}},
    {"TopBackDeath4", {1268, 2723, 461, 485, 307, 508}},
    {"TopBackLife2", {496, 2847, 475, 455, 324, 495}},
    {"TopBackLife1", {0, 2853, 436, 432, 329, 507}},
    {"TopBackCast2", {2240, 2858, 404, 424, 329, 510}},
    {"TopBackCast1", {1729, 2880, 398, 390, 329, 549}},
    {"TopBackDeath5", {3338, 2882, 398, 331, 219, 636}},
    {"TopBackPalm", {496, 2361, 318, 324, 329, 615}},
    {"TopBack0Close1", {1279, 1776, 123, 256, 642, 507}},
    {"TopBack0Close2", {1279, 2032, 108, 252, 642, 512}},
    {"TopBack0Close3", {2425, 1195, 92, 239, 641, 527}},
    {"TopBack0Close4", {3332, 599, 117, 212, 612, 555}},
    {"TopBack0Close5", {3449, 599, 125, 198, 602, 569}},
    
    {"TopBack1Close1", {2969, 1763, 53, 304, 558, 366}},
    {"TopBack1Close2", {378, 1796, 53, 283, 558, 389}},
    {"TopBack1Close3", {2969, 2067, 53, 163, 558, 513}},
    {"TopBack1Close4", {1729, 2723, 53, 151, 558, 541}},
    {"TopBack1Close5", {378, 2079, 53, 144, 558, 550}},

    {"TopBack2Close1", {2969, 1763, 53, 304, 483, 366}},
    {"TopBack2Close2", {378, 1796, 53, 283, 483, 389}},
    {"TopBack2Close3", {2969, 2067, 53, 163, 483, 513}},
    {"TopBack2Close4", {1729, 2723, 53, 151, 483, 541}},
    {"TopBack2Close5", {378, 2079, 53, 144, 483, 550}},

    {"TopBack3Close1", {2969, 1763, 53, 304, 408, 366}},
    {"TopBack3Close2", {378, 1796, 53, 283, 408, 389}},
    {"TopBack3Close3", {2969, 2067, 53, 163, 408, 513}},
    {"TopBack3Close4", {1729, 2723, 53, 151, 408, 541}},
    {"TopBack3Close5", {378, 2079, 53, 144, 408, 550}},

    {"TopBack4Close1", {2969, 1763, 53, 304, 333, 366}},
    {"TopBack4Close2", {378, 1796, 53, 283, 333, 389}},
    {"TopBack4Close3", {2969, 2067, 53, 163, 333, 513}},
    {"TopBack4Close4", {1729, 2723, 53, 151, 333, 541}},
    {"TopBack4Close5", {378, 2079, 53, 144, 333, 550}},
};

#endif