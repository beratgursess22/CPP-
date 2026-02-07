#!/bin/bash

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo -e "${BLUE}======================================"
echo "CPP06 - EX00 TESTS"
echo -e "======================================${NC}\n"

# ============================================
# CHAR LITERAL TESTS
# ============================================
echo -e "${YELLOW}======================================"
echo "CHAR LITERAL TESTS"
echo -e "======================================${NC}"

echo -e "${GREEN}Test 1: 'c'${NC}"
./ScalarConverter.out \'c\'
echo ""

echo -e "${GREEN}Test 2: 'a'${NC}"
./ScalarConverter.out \'a\'
echo ""

echo -e "${GREEN}Test 3: '0'${NC}"
./ScalarConverter.out \'0\'
echo ""

echo -e "${GREEN}Test 4: '*'${NC}"
./ScalarConverter.out \'*\'
echo ""

# ============================================
# INT LITERAL TESTS
# ============================================
echo -e "${YELLOW}======================================"
echo "INT LITERAL TESTS"
echo -e "======================================${NC}"

echo -e "${GREEN}Test 5: 0${NC}"
./ScalarConverter.out 0
echo ""

echo -e "${GREEN}Test 6: 42${NC}"
./ScalarConverter.out 42
echo ""

echo -e "${GREEN}Test 7: -42${NC}"
./ScalarConverter.out -42
echo ""

echo -e "${GREEN}Test 8: 65 (ASCII 'A')${NC}"
./ScalarConverter.out 65
echo ""

echo -e "${GREEN}Test 9: 10 (non-displayable)${NC}"
./ScalarConverter.out 10
echo ""

echo -e "${GREEN}Test 10: 127 (DEL)${NC}"
./ScalarConverter.out 127
echo ""

echo -e "${GREEN}Test 11: 200 (out of char range)${NC}"
./ScalarConverter.out 200
echo ""

echo -e "${GREEN}Test 12: +42${NC}"
./ScalarConverter.out +42
echo ""

# ============================================
# FLOAT LITERAL TESTS
# ============================================
echo -e "${YELLOW}======================================"
echo "FLOAT LITERAL TESTS"
echo -e "======================================${NC}"

echo -e "${GREEN}Test 13: 0.0f${NC}"
./ScalarConverter.out 0.0f
echo ""

echo -e "${GREEN}Test 14: 42.0f${NC}"
./ScalarConverter.out 42.0f
echo ""

echo -e "${GREEN}Test 15: 42.5f${NC}"
./ScalarConverter.out 42.5f
echo ""

echo -e "${GREEN}Test 16: -4.2f${NC}"
./ScalarConverter.out -4.2f
echo ""

echo -e "${GREEN}Test 17: 4.2f${NC}"
./ScalarConverter.out 4.2f
echo ""

# ============================================
# DOUBLE LITERAL TESTS
# ============================================
echo -e "${YELLOW}======================================"
echo "DOUBLE LITERAL TESTS"
echo -e "======================================${NC}"

echo -e "${GREEN}Test 18: 0.0${NC}"
./ScalarConverter.out 0.0
echo ""

echo -e "${GREEN}Test 19: 42.0${NC}"
./ScalarConverter.out 42.0
echo ""

echo -e "${GREEN}Test 20: 42.5${NC}"
./ScalarConverter.out 42.5
echo ""

echo -e "${GREEN}Test 21: -4.2${NC}"
./ScalarConverter.out -4.2
echo ""

echo -e "${GREEN}Test 22: 4.2${NC}"
./ScalarConverter.out 4.2
echo ""

# ============================================
# PSEUDO-LITERAL TESTS
# ============================================
echo -e "${YELLOW}======================================"
echo "PSEUDO-LITERAL TESTS"
echo -e "======================================${NC}"

echo -e "${GREEN}Test 23: nan${NC}"
./ScalarConverter.out nan
echo ""

echo -e "${GREEN}Test 24: nanf${NC}"
./ScalarConverter.out nanf
echo ""

echo -e "${GREEN}Test 25: +inf${NC}"
./ScalarConverter.out +inf
echo ""

echo -e "${GREEN}Test 26: -inf${NC}"
./ScalarConverter.out -inf
echo ""

echo -e "${GREEN}Test 27: +inff${NC}"
./ScalarConverter.out +inff
echo ""

echo -e "${GREEN}Test 28: -inff${NC}"
./ScalarConverter.out -inff
echo ""

echo -e "${GREEN}Test 29: inf${NC}"
./ScalarConverter.out inf
echo ""

echo -e "${GREEN}Test 30: inff${NC}"
./ScalarConverter.out inff
echo ""

# ============================================
# EDGE CASES
# ============================================
echo -e "${YELLOW}======================================"
echo "EDGE CASES"
echo -e "======================================${NC}"

echo -e "${GREEN}Test 31: INT_MAX (2147483647)${NC}"
./ScalarConverter.out 2147483647
echo ""

echo -e "${GREEN}Test 32: INT_MAX+1 (2147483648)${NC}"
./ScalarConverter.out 2147483648
echo ""

echo -e "${GREEN}Test 33: INT_MIN (-2147483648)${NC}"
./ScalarConverter.out -2147483648
echo ""

# ============================================
# ERROR TESTS
# ============================================
echo -e "${YELLOW}======================================"
echo "ERROR TESTS"
echo -e "======================================${NC}"

echo -e "${GREEN}Test 34: abc (invalid)${NC}"
./ScalarConverter.out abc
echo ""

echo -e "${GREEN}Test 35: 42abc (invalid)${NC}"
./ScalarConverter.out 42abc
echo ""

echo -e "${GREEN}Test 36: 'ab' (invalid char)${NC}"
./ScalarConverter.out \'ab\'
echo ""

echo -e "${BLUE}======================================"
echo "ALL TESTS COMPLETED"
echo -e "======================================${NC}"
