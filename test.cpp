#include <gtest/gtest.h>
#include <vector>

// �������� ������������ ���� � ������������ ������� increaseVector
#include "increase_vector.h"

// ������������ ������� increaseVector
TEST(IncreaseVectorTest, BasicTest) {
    std::vector<int> input = { 1, 2, 3, 4, 5 };
    int increment = 10;

    // �������� ������� increaseVector
    std::vector<int> result = increaseVector(input, increment);

    // ���������, ��� ��������� ������������� ����������
    EXPECT_EQ(result.size(), input.size());
    for (size_t i = 0; i < input.size(); ++i) {
        EXPECT_EQ(result[i], input[i] + increment);
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
