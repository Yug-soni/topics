cmake_minimum_required(VERSION 3.19)
project(topics)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(_1_number_theory)
include_directories(_2_bit_manipulation)
include_directories(_3_stack_and_queue)
include_directories(_4_linked_list)
include_directories(_5_recursion)

add_executable(topics
        _2_bit_manipulation/_1_and_then_there_were_k.cpp
        _2_bit_manipulation/_2_counter_game.cpp
        _2_bit_manipulation/_3_sansa_and_xor.cpp
        _2_bit_manipulation/_4_and_product.cpp
        _2_bit_manipulation/_5_the_great_xor.cpp
        _2_bit_manipulation/_6_a_xor_challange.cpp
        _3_stack_and_queue/_1_stack_implementation.cpp
        _3_stack_and_queue/_2_queue_implementation.cpp
        _3_stack_and_queue/_3_stack_next_element.cpp
        _3_stack_and_queue/_4_stack_stock_span.cpp
        _3_stack_and_queue/_5_stack_maximum_area_histogram.cpp
        _4_linked_list/_1_reverse_linked_list.cpp
        _5_recursion/_10_print_all_permutations.cpp
        _5_recursion/_11_source_to_destination.cpp
        _5_recursion/_1_counting.cpp
        _5_recursion/_2_factorial.cpp
        _5_recursion/_3_fibonacci.cpp
        _5_recursion/_4_spell_counting.cpp
        _5_recursion/_5_exponent.cpp
        _5_recursion/_6_sorted_or_not.cpp
        _5_recursion/_7_generate_power_set.cpp
        _5_recursion/_8_total_number_of_ways_to_reach_destination.cpp
        _5_recursion/_9_generate_sub_sequences.cpp)
