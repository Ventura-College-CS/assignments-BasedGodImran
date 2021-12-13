// still going

#include "Course.h"

Course::Course() {
    id = 0;
    name = "";
    credit = 0;
}

/**
 *
 * @param id 
 * @param name 
 * @param credit 
 */
Course::Course(int id, string name, int credit) : id(id), name(name), credit(credit) {}

/**
 * 
 *
 * @return 
 */
int Course::getId() const {
    return id;
}

