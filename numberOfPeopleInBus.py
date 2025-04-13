# file: 	numberOfPeopleInBus.cpp
# author:	Diogo Marques
# data:		13/04/2025
# description:
#	Number of People in Bus at codewars.com
def number(bus_stops):
    bus_count = 0
    for i in bus_stops:
        bus_count += i[0]
        bus_count += -i[1]
    return bus_count