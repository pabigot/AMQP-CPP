#include <gtest/gtest.h>
#include <amqpcpp.h>

namespace {

void auxtest2 (const AMQP::Table& tbl)
{
  ASSERT_EQ(tbl.size(), 18U);
}

void auxtest (const AMQP::Field& fld)
{
  auxtest2(fld);
}

TEST(TableField, implicitCast)
{
  AMQP::Table tbl;

  tbl.set("key", "value");
  ASSERT_EQ(tbl.size(), 18U);
  auxtest(tbl);

}

} // ns anonymous
