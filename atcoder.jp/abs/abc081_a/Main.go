package main

import "fmt"

func main() {
	var s string
	var ans = 0
	fmt.Scanf("%s", &s)
	for i := 0; i < 3; i++ {
		if s[i] == '1' {
			ans++
		}
	}
	fmt.Printf("%d\n", ans)
}
