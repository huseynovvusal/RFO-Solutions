// https://basecamp.eolymp.com/en/problems/9001

package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b int64
	fmt.Scan(&a, &b)

	if a > 0 && b > 0 {
		fmt.Println(1)
	} else if (a < 0 && b > 0) || a == 0 || b == 0 {
		fmt.Println(0)
	} else if a < 0 && b < 0 {
		if (int64(math.Abs(float64(b-a)))+1)%2 == 1 {
			fmt.Println(-1)
		} else {
			fmt.Println(1)
		}
	}
}