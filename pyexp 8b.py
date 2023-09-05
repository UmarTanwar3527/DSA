def count_file_stats(File1):
    with open(File1, 'r') as file:
        content = file.read()

    # Counting characters
    character_count = len(content)

    # Counting words
    word_count = len(content.split())

    # Counting lines
    line_count = content.count('\n') + 1

    return character_count, word_count, line_count


# Usage example
# file_path = 'File1.txt'  # Replace with your file path
char_count, word_count, line_count = count_file_stats('File1.txt')

print(f"Number of characters: {char_count}")
print(f"Number of words: {word_count}")
print(f"Number of lines: {line_count}")