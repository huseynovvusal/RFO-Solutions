// https://basecamp.eolymp.com/en/problems/9639

package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	fmt.Scan(&n)

	mp := make(map[int]int)
	for i := 0; i < n; i++ {
		var count, number int
		fmt.Scan(&count, &number)
		mp[number] += count
	}

	var m int
	fmt.Scan(&m)

	// Extract keys and sort them
	keys := make([]int, 0, len(mp))
	for k := range mp {
		keys = append(keys, k)
	}
	sort.Ints(keys)

	k := 0
	for _, key := range keys {
		k += mp[key]
		if k >= m {
			fmt.Println(key)
			return
		}
	}
}
