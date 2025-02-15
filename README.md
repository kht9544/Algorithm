## 🔧 구현된 알고리즘 및 자료구조

### 📌 기본 자료구조 구현
- **Queue (Queue.cpp)**  
  큐(Queue) 자료구조를 **std::list** 기반으로 직접 구현하였습니다.

- **Stack (Stack.cpp)**  
  스택(Stack) 자료구조를 **std::vector** 기반으로 구현하였습니다.

- **Priority Queue (PriorityQueue.cpp)**  
  우선순위 큐(Priority Queue)를 힙(Heap) 자료구조를 사용하여 구현하였습니다.

### 📌 자료구조
- **이진 탐색 트리 (BinarySearchTree.cpp, BinarySearchTree.h)**  
  기본적인 이진 탐색 트리(Binary Search Tree, BST)를 구현하였습니다. 삽입, 검색, 삭제 연산이 포함되어 있습니다.

- **트리 (Tree.cpp)**  
  트리(Tree) 구조를 생성하고 계층적으로 출력하는 기능을 포함합니다.

- **그래프 (Graph.cpp)**  
  그래프(Graph)를 **인접 리스트(Adjacency List)**와 **인접 행렬(Adjacency Matrix)** 두 가지 방식으로 구현하였습니다.

- **분리 집합 (DisJointSet.cpp)**  
  유니온-파인드(Union-Find) 알고리즘을 이용하여 집합을 관리하고, 경로 압축(Path Compression)을 적용하여 성능을 개선하였습니다.

- **최소 신장 트리 (MST.cpp)**  
  크루스칼 알고리즘(Kruskal Algorithm)을 사용하여 **최소 신장 트리(Minimum Spanning Tree, MST)**를 찾는 방법을 구현하였습니다.

### 📌 탐색 알고리즘
- **BFS (Bfs.cpp)**  
  너비 우선 탐색(Breadth-First Search) 알고리즘을 구현하였습니다. 큐(Queue)를 사용하여 노드를 방문하며 최단 경로를 찾는 데 활용됩니다.

- **DFS (Dfs.cpp)**  
  깊이 우선 탐색(Depth-First Search) 알고리즘입니다. 재귀 또는 스택(Stack)을 사용하여 그래프를 탐색하는 방식으로 구현되었습니다.
  
- **A* (AStar.cpp)**  
  최단 경로를 찾기 위한 휴리스틱 기반 탐색 알고리즘입니다. 인접 행렬을 사용하여 그래프를 생성하고, 우선순위 큐를 활용하여 탐색을 수행합니다.

- **Dijkstra (Dijkstra.cpp, Djikstar.cpp)**  
  다익스트라(Dijkstra) 최단 경로 알고리즘을 구현하였습니다. 우선순위 큐(Priority Queue)를 사용하여 가중치가 있는 그래프에서 최단 경로를 찾습니다.

### 📌 정렬 알고리즘
- **Merge Sort (MergeSort.cpp)**  
  병합 정렬(Merge Sort)을 구현하였습니다. `O(N log N)`의 시간 복잡도를 가지며, 안정적인 정렬 방식입니다.

- **Quick Sort (QuickSort.cpp)**  
  퀵 정렬(Quick Sort) 알고리즘을 구현하였습니다. 평균 `O(N log N)`, 최악 `O(N^2)`의 시간 복잡도를 가지며, 분할 정복 기법을 사용합니다.

### 📌 동적 프로그래밍 (Dynamic Programming)
- **피보나치 수열 (DP(0).cpp)**  
  동적 프로그래밍(DP)을 사용하여 피보나치 수열을 효율적으로 계산합니다. 메모이제이션을 활용하여 중복 계산을 줄이고 실행 시간을 단축합니다.

- **조합 (Combination) (DP(1).cpp)**  
  조합 공식 `nCr = (n-1)Cr + (n-1)C(r-1)`을 활용하여 이항 계수를 동적 프로그래밍으로 계산합니다. 2차원 배열을 이용해 중복 계산을 방지합니다.

- **최장 증가 부분 수열 (LIS, DP(2).cpp)**  
  최장 증가 부분 수열(Longest Increasing Subsequence, LIS)을 찾는 알고리즘을 구현했습니다. DP를 활용하여 최적 부분 구조를 사용합니다.

- **강화 시스템 경우의 수 (DP(3).cpp)**  
  특정 조건(강화 시 +1, +2, +3이 랜덤하게 적용됨)에서 원하는 강화 수치까지 도달하는 모든 경우의 수를 계산하는 문제를 DP로 해결합니다.

---
