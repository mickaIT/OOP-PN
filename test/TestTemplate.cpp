#include <boost/test/unit_test.hpp>

#include "Template.h"
#include "CookProgram.h"

BOOST_AUTO_TEST_SUITE(ProjectTest)

BOOST_AUTO_TEST_CASE(AddTest) {
        Template temp;
        BOOST_CHECK_EQUAL(temp.toString(), "template");
}

BOOST_AUTO_TEST_CASE(RemoveTest) {
        Template temp;
        BOOST_CHECK_EQUAL(temp.toString(), "template");
}

BOOST_AUTO_TEST_CASE(MyTest) {
       const int power = 666;
        Program* obj = new CookProgram(power);
        BOOST_CHECK_EQUAL(obj->getPower(), power);
}
BOOST_AUTO_TEST_SUITE_END()
