hackerrank.store(543121, 100)

hackerrank.keep_if{|key, values| key.is_a?(Integer)}

hackerrank.delete_if{|key, values| key%2 == 0}
