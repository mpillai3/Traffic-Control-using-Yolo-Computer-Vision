//
//  AbstractTrafficLightState.hpp
//  TraffikTrak
//
//  Created by Matt Lovick on 2020-12-01.
//  Copyright © 2020 Matt Lovick. All rights reserved.
//

#ifndef AbstractTrafficLightState_hpp
#define AbstractTrafficLightState_hpp

class TrafficLight;

/** @class AbstractTrafficLightState
 *  @brief abstract class to change light based on traffic light state
 *  @author Matthew Lovick
 */
class AbstractTrafficLightState {
    
public:
    virtual ~AbstractTrafficLightState() { };
    virtual void changeLight(TrafficLight* light) = 0;

};

#endif /* AbstractTrafficLightState_hpp */
