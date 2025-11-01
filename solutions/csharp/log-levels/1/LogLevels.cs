public static class LogLine
{
    // 从日志行获取消息，移除前后空白
    public static string Message(string logLine)
    {
        int colonIndex = logLine.IndexOf(':');
        string messagePart = logLine.Substring(colonIndex + 1);
        return messagePart.Trim();
    }

    // 从日志行获取日志级别，以小写形式返回
    public static string LogLevel(string logLine)
    {
        int closingBracketIndex = logLine.IndexOf(']');
        string level = logLine.Substring(1, closingBracketIndex - 1);
        return level.ToLower();
    }

    // 重新格式化日志行，消息在前，级别在括号中在后
    public static string Reformat(string logLine)
    {
        string message = Message(logLine);
        string level = LogLevel(logLine);
        return $"{message} ({level})";
    }
}