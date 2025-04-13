// file: 	numberOfPeopleInBus.cpp
// author:	Diogo Marques
// data:	13/04/2025
// description:
//	Number of People in Bus at codewars.com
#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  int bus_count = 0;
  for(int i = 0; i < busStops.size(); i++){
    bus_count += busStops[i].first;
    bus_count += - busStops[i].second;
  }
  return bus_count;
}