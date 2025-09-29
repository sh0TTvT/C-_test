#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    bool needs_license{false};
    if(kind == "car" or kind == "truck"){
        needs_license = true;
    }
    return needs_license;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    std::string choose_vehicle{option1};
    if(option1 > option2){
        choose_vehicle = option2;
    }
    return choose_vehicle + " is clearly the better choice.";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    double fin_price;
    if(age >0){
        if(age < 3){
            fin_price = original_price * 0.8;
        }else if(age >= 3 and age < 10){
            fin_price = original_price * 0.7;
        }else{
            fin_price = original_price * 0.5;
        }
    }
    return fin_price;
}

}  // namespace vehicle_purchase
