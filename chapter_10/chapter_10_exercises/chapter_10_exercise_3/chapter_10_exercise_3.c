// Unbounded or infinite, there is no maximum limit in the C standard.

int main(void)
{
    int i;

    {
        int i;

        {
            int i;

            {
                int i;
                // etc.....
            }
        }
    }
}