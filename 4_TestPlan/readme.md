# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if a candidate can perform the next move                |Remove stack of piles|Perform next move|Perform next move|Requirement based |
|  H_02       |Candidate who makes the first move|The first candidate|Return SUCCESS	|Return SUCCESS	|Scenario based    |
|  H_03       |Not to stuck in a loop| Array and other parameters|Return 1|Return 1|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Sort the array|Unsorted array|Sorted array|Sorted array|Requirement based |
|  L_02       |Merge the sorted array|Two sorted arrays|Merged Sorted array|Merged Sorted array|Scenario based    |
|  L_03       |Get the position|Array with other parameters|Position of the required element|Position of the required element|Boundary based    |
|  L_04       |Median of the array|Array with other parameters|Median of array|Median of array|Requirement based|
