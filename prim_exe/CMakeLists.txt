cmake_minimum_required (VERSION 2.6)
SET (name Prim)
SET (sources edge.cpp graph.cpp prim.cpp prim_algorithm.cpp vertex.cpp write_read_files.cpp)
SET (headers compare_edges.h edge.h graph.h prim_algorithm.h vertex.h write_read_files.h)
project (${name})
add_executable (${name} ${sources} ${headers})